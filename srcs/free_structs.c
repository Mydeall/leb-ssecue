#include "bsq.h"

void	free_structs(t_fl *fl, t_map *map, t_sq *bsq)
{
	free(bsq);
	free(fl);
	free(map);
}
