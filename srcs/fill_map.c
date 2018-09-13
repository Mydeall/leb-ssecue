#include "bsq.h"

void	fill_map(t_fl *fl, t_map *map, t_sq *bsq)
{
	int p = 0;
	int x = 0;
	int y = 0;

	while (y < bsq->size)
	{
		p = bsq->p + ((map->map_x + 1) * y);
		while (x < bsq->size)
		{
			map->map[p + x] = fl->fill;
			x++;
		}
		y++;
		x = 0;
	}
}
