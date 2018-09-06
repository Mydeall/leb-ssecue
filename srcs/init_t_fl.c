#include "bsq.h"

t_fl	*init_t_fl()
{
	t_fl	*fl;

	if (!(fl = malloc(sizeof(t_fl))))
		exit(1);
	fl->size = 0;
	fl->obs  = '\0';
	fl->empty  = '\0';
	fl->fill  = '\0';
	return (fl);
}
