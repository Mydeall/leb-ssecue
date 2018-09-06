#include "bsq.h"

t_fl	*init_t_fl()
{
	t_fl	*fl_data;

	if (!(fl_data = malloc(sizeof(t_fl))))
		exit(1);
	fl_data->size = 0;
	fl_data->obs  = '\0';
	fl_data->empty  = '\0';
	fl_data->fill  = '\0';
	fl_data->size_fl = 0;
	return (fl_data);
}
