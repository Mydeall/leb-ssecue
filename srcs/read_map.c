#include "bsq.h"
void	map_to_tab(char *path, t_map *map)
{
//	int *tab;
	int fd;
	char buf;

	fd = open(path, O_RDONLY);
	while (read(fd, &buf, 1) != 0 && buf != '\n')
	{}
	while (read(fd, &buf, 1) != 0)
	{
		map->nb_cases++;
		if (buf == '\n')
			map->nb_lines++;
	}
	map->nb_cases -= map->nb_lines;
	printf("%d", map->nb_cases);
}
void							read_map(char *path, t_map *map)
{
		map_to_tab(path, map);
}
