#include "bsq.h"

int		check_sq(t_fl *fl, t_map *map, int size, int ip)
{
	int p = 0;
	int x = 0;
	int y = 0;

	while (y < size)
	{
		p = ip + ((map->map_x + 1) * y);
		while (x < size)
		{
			if (map->map[p + x] == '\n')
				return(1);
			if (map->map[p + x] == fl->obs || p + x >= map->nb - 1)
				return (1);
			x++;
		}
		y++;
		x = 0;
	}
	return(0);
}

void	algo(t_fl *fl, t_map *map, t_sq *bsq)
{
	int ip = 0;
	int size = 1;

	if (map->map_x == 1 && fl->size == 1)
	{
		bsq->size = 1;
		bsq->p = 0;
		return;
	}
	while (ip < map->nb - 2)
	{
		while (check_sq(fl, map, size, ip) == 0)
			size++;
		if (size - 1 > bsq->size)
		{
			bsq->size = size - 1;
			bsq->p = ip;
		}
		ip++;
		size = 1;
	}
}
