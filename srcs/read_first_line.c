#include "bsq.h"

void	read_fl(char *map, t_fl *first_line)
{
	int fd;
	char	buffer;

	fd = open(map, O_RDONLY);
		first_line->size = 666;
	while (read(fd, &buffer, 1) != 0)
			write(1, &buffer, 1);
}
