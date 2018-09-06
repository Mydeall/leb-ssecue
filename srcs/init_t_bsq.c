#include "bsq.h"

t_bsq	*init_t_bsq()
{
	t_bsq	*init;

	if (!(init = malloc(sizeof(t_bsq))))
		exit(1);
	init->posx = 0;
	init->posy = 0;
	init->size = 4;
	return (init);
}
