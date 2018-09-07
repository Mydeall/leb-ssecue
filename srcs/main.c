#include "bsq.h"

int		check_sq(t_bsq *bsq, t_map *map, t_fl *fl)
{
	int p;
	int checked_lines;
	int i;
	bsq->size = 3;
	checked_lines = 0;

	while (checked_lines < bsq->size)
	{
		i = 0;
		p = bsq->pos + ((map->map_y + 1) * checked_lines);
		while ((i < bsq->size ) && ( map->map[p + i] != '\n') &&
				((p - bsq->size) < map->nboct))
		{
		printf("p : %d\n", p);
			if (map->map[p] == fl->obs)
				return(p);
			p++;
			i++;
		}
		checked_lines++;
	}
	return (0);
}

int		main(int ac, char **av)
{
	t_fl *fl;
	t_map *map;
	t_bsq *bsq;

	fl = init_t_fl();
	map = init_t_map();
	bsq = init_t_bsq();
	if (ac != 2)
		return (0);
	read_fl(av[1], fl);
	read_map(av[1], map);
	check_map(fl, map);
	printf("x: %d, y: %d\n", map->map_x, map->map_y);
	printf("return : %d\n", check_sq(bsq, map, fl));

	ft_putstr(map->map);
	return (0);
}
