#include "bsq.h"

void	read_fl(char *map, t_fl *first_line)
{
	int fd;
	char	buffer;

	first_line->size = 666;
	//fd = open(map, O_RDONLY);
	fd= 0;
	map[0] = 50;
	while (read(fd, &buffer, 1) != 0)
			write(1, &buffer, 1);
}
