#include "bsq.h"

char	*fl_to_tab(char *path, t_fl *fl_data)
{
	int 	fd;
	char	buf;
	int		 i;
	char	*fl;

	i = 0;
	if ((fd = open(path, O_RDONLY)) == -1)
		ft_puterr();;
	while (read(fd, &buf, 1) != 0 && buf != '\n')
		i++;
	close(fd);
	fd = open(path, O_RDONLY);
	if (!(fl = malloc(sizeof(char) * i)))
		exit(1);
	fl_data->size_fl = i;
	i = 0;
	while (read(fd, &buf, 1) != 0 && buf != '\n')
		fl[i++] = buf;
	fl[i] = '\0';
	return (fl);
}

void	read_fl(char *path, t_fl *fl_data)
{
	char *fl;
	int		sizefl;
	fl = fl_to_tab(path, fl_data);

	sizefl = ft_strlen(fl);
	if (sizefl < 3)
		ft_puterr();;
	fl_data->fill = fl[sizefl - 1];
	fl[sizefl - 1] = '\0';
	fl_data->obs = fl[sizefl - 2];
	fl[sizefl - 2] = '\0';
	fl_data->empty = fl[sizefl - 3];
	fl[sizefl - 3] = '\0';
	fl_data->size = miniatoi(fl);
}
