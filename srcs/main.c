#include "bsq.h"

/*void	check_sq(t_bsq *bsq, t_map *map, t_fl *fl)
{
	printf("posx: %d, posy: %d, size: %d\n", bsq->posx, bsq->posy, bsq->size);
}*/
//TODO do that

int		main(int ac, char **av)
{
	t_fl *fl;
	t_map *map;
	//t_bsq *bsq;

	fl = init_t_fl();
	map = init_t_map();
	//bsq = init_t_bsq();
	if (ac != 2)
		return (0);
	read_fl(av[1], fl);
	read_map(av[1], map);
	check_map(fl, map);
	printf("x: %d, y: %d\n", map->map_x, map->map_y);
	//check_sq(bsq, map, fl);

	ft_putstr(map->map);
	return (0);
}
