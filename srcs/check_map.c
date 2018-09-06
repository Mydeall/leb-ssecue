#include "bsq.h"

void	check_map(t_fl *fl_data, t_map *map)
{
	int		i;
	int		size_line;

	i = 0;
	size_line = 0;
	while (map->map[i] != '\0')
	{
		if ((map->map[i] != fl_data->empty) &&
				(map->map[i] != fl_data->obs) && (map->map[i] != '\n'))
					ft_puterr();;
	size_line++;
	if (map->map[i] == '\n')
		{
			if (size_line -1 != fl_data->size)
				ft_puterr();;
			size_line = 0;
		}
	i++;
	}
}
