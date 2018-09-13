#include "bsq.h"

t_sq	*init_t_sq()
{
	t_sq	*init;

	if (!(init = malloc(sizeof(t_sq))))
		exit(1);
	init->p = 0;
	init->size = 0;
	init->x = 0;
	init->y = 0;
	return (init);
}
