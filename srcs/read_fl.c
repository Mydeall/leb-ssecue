#include "bsq.h"

char	*fl_to_tab(char *path)
{
	int 	fd;
	char	buf;
	int		 i;
	char	*tab;

	i = 0;
	if ((fd = open(path, O_RDONLY)) == -1)
		ft_puterr();
	while (read(fd, &buf, 1) != 0 && buf != '\n')
		i++;
	close(fd);
	if ((fd = open(path, O_RDONLY)) == -1)
		ft_puterr();
	if (!(tab = malloc(sizeof(char) * i)))
		exit(1);
	i = 0;
	while (read(fd, &buf, 1) != 0 && buf != '\n')
		tab[i++] = buf;
	tab[i] = '\0';
	return (tab);
}

void	read_fl(char *path, t_fl *fl)
{
	char *tab;
	int		sizefl;
	tab = fl_to_tab(path);

	sizefl = ft_strlen(tab);
	if (sizefl < 3)
		ft_puterr();
	fl->fill = tab[sizefl - 1];
	tab[sizefl - 1] = '\0';
	fl->obs = tab[sizefl - 2];
	tab[sizefl - 2] = '\0';
	fl->empty = tab[sizefl - 3];
	tab[sizefl - 3] = '\0';
	fl->size = miniatoi(tab);
}
