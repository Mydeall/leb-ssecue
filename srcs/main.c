#include "bsq.h"

int		main(int ac, char **av)
{
	t_fl *fl_data;
	t_map *map;

	fl_data = init_t_fl();
	map = init_t_map();
	if (ac != 2)
		return (0);
	read_fl(av[1], fl_data);
	read_map(av[1], map);
	check_map(fl_data, map);
	ft_putstr(map->map);
	return (0);
}
