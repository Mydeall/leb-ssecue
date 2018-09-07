#include "bsq.h"

t_bsq	*init_t_bsq()
{
	t_bsq	*init;

	if (!(init = malloc(sizeof(t_bsq))))
		exit(1);
	init->pos = 3;
	init->size = 0;
	return (init);
}
