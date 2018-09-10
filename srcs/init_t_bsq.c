#include "bsq.h"

t_bsq	*init_t_bsq()
{
	t_bsq	*init;

	if (!(init = malloc(sizeof(t_bsq))))
		exit(1);
	init->pos = 0;
	init->siz = 1;
	return (init);
}
