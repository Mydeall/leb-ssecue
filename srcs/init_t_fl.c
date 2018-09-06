#include "bsq.h"

t_fl	*init_t_fl()
{
	t_fl	*first_line;

	if (!(first_line = malloc(sizeof(t_fl))))
		exit(1);
	first_line->size = 0;
	first_line->obs  = '\0';
	first_line->empty  = '\0';
	first_line->fill  = '\0';
	first_line->size_fl = 0;
	return (first_line);
}
