#include "bsq.h"

t_map	*init_t_map()
{
	t_map	*init;

	if (!(init = malloc(sizeof(t_map))))
		exit(1);
	init->nb = 0;
	init->map_y = 0;
	init->map_x = 0;
	return (init);
}
