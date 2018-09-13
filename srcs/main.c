#include "bsq.h"

void	free_structs(t_fl *fl, t_map *map, t_sq *bsq)
{
	free(bsq);
	free(fl);
	free(map);
}
void	fill_tab(t_fl *fl, t_map *map, t_sq *bsq)
{
	int p = 0;
	int x = 0;
	int y = 0;

	while (y < bsq->size)
	{
		p = bsq->p + ((map->map_x + 1) * y);
		while (x < bsq->size)
		{
			map->map[p + x] = fl->fill;
			x++;
		}
		y++;
		x = 0;
	}
}
int		main(int ac, char **av)
{
	t_fl *fl;
	t_map *map;
	t_sq *bsq;
	int		i;

	i = 0;
	while (i++ < ac - 1)
	{

	fl = init_t_fl();
	map = init_t_map();
	bsq = init_t_sq();
	read_fl(av[i], fl);
	read_map(av[i], map);
	check_map(fl, map);
	algo(fl, map, bsq);
	fill_tab(fl, map, bsq);
	ft_putstr(map->map);
	free_structs(fl, map, bsq);
	}
	return (0);
}
