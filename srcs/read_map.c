#include "bsq.h"
int	read_map(char *path, t_map *map)
{
	int fd;
	char buf;
	int i;

	i = 0;
	if ((fd = open(path, O_RDONLY)) == -1)
		return (0);
	while (read(fd, &buf, 1) != 0 && buf != '\n')
	{}
	while (read(fd, &buf, 1) != 0)
	{
		map->nb++;
		if (buf == '\n')
			map->map_y++;
	}
	if (!(map->map = malloc(sizeof(char) * map->nb)))
		return (0);
	close(fd);
	fd = open(path, O_RDONLY);
	while (read(fd, &buf, 1) != 0 && buf != '\n')
	{}
	while (read(fd, &buf, 1) != 0)
		map->map[i++] = buf;
	map->map[i] = '\0';
	return (0);
}
