
#include "bsq.h"

int		main(int ac, char **av)
{
	t_fl *first_line;

	first_line = init_t_fl();

	if (ac != 2)
		return (0);
	read_fl(av[1], first_line);

	return (0);

}
