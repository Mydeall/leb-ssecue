#include "bsq.h"

int		check_map(t_fl *fl_data, t_map *map)
{
	int		i;
	int		size_line;
	int		ref_size_line;

	i = -1 ;
	size_line = 0;
	ref_size_line = 0;
	while (map->map[i++] != '\n')
		ref_size_line++;
	i = 0;
	while (map->map[i] != '\0')
	{
		if ((map->map[i] != fl_data->empty) &&
			(map->map[i] != fl_data->obs) && (map->map[i] != '\n'))
				return (1);
		size_line++;
		if (map->map[i] == '\n')
		{
			map->map_x = size_line - 1;
			if (size_line != ref_size_line)
				return (1);
			size_line = 0;
		}
		i++;
	}
	return (0);
}
