
#include "bsq.h"


int		main(int ac, char **av)
{
	t_fl *first_line;
	t_map *map;

	first_line = init_t_fl();
	map = init_t_map();

	if (ac != 2)
		return (0);
	read_fl(av[1], first_line);
	read_map(av[1], map);
	return (0);

}
