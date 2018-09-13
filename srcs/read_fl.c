#include "bsq.h"

char	*fl_to_tab(char *path)
{
	int 	fd;
	char	buf;
	int		 i;
	char	*tab;

	i = 0;
	if ((fd = open(path, O_RDONLY)) == -1)
		return (NULL);
	while (read(fd, &buf, 1) != 0 && buf != '\n')
		i++;
	if (close(fd) == -1)
		return (NULL);
	if ((fd = open(path, O_RDONLY)) == -1)
		return (NULL);
	if (!(tab = (char*)malloc(sizeof(char) * i)))
		return (NULL);
	i = 0;
	while (read(fd, &buf, 1) != 0 && buf != '\n')
		tab[i++] = buf;
	tab[i] = '\0';
	return (tab);
}

int		read_fl(char *path, t_fl *fl)
{
	char *tab;
	int		sizefl;
	if (!(tab = fl_to_tab(path)))
		return(1);

	sizefl = ft_strlen(tab);
	if (sizefl < 3)
		return (1);
	fl->fill = tab[sizefl - 1];
	tab[sizefl - 1] = '\0';
	fl->obs = tab[sizefl - 2];
	tab[sizefl - 2] = '\0';
	fl->empty = tab[sizefl - 3];
	tab[sizefl - 3] = '\0';
	fl->size = miniatoi(tab);
	if (fl->size == 0)
		return (1);
	free(tab);
	return (0);
}
