#include "bsq.h"

char	*fl_to_tab(char *path)
{
	int 	fd;
	char	buf;
	int		 i;
	char	*fl;

	i = 0;
	fd = open(path, O_RDONLY);
	while (read(fd, &buf, 1) != 0 && buf != '\n')
		i++;
	close(fd);
	fd = open(path, O_RDONLY);
	if (!(fl = malloc(sizeof(char) * i)))
		exit(1);
	i = 0;
	while (read(fd, &buf, 1) != 0 && buf != '\n')
		fl[i++] = buf;
	fl[i] = '\0';
	return (fl);
}

void	read_fl(char *path, t_fl *first_line)
{
	char *fl;
	int		sizefl;
	fl = fl_to_tab(path);

	sizefl = ft_strlen(fl);
	first_line->fill = fl[sizefl - 1];
	fl[sizefl - 1] = '\0';
	first_line->obs = fl[sizefl - 2];
	fl[sizefl - 2] = '\0';
	first_line->empty = fl[sizefl - 3];
	fl[sizefl - 3] = '\0';
	first_line->size = miniatoi(fl);
}
