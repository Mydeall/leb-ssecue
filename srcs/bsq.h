#ifndef BSQ_H
# define BSQ_H

# include 		<unistd.h>
# include 		<stdlib.h>
# include 		<stdio.h>
# include 		<fcntl.h>
# include 		"ft.h"

typedef struct 	s_map
{
	char		*map;
	int			nb;
	int			map_y;
	int			map_x;
}				t_map;

typedef struct 	s_fl
{
	int			size;
	char		obs;
	char		empty;
	char		fill;
}				t_fl;

typedef struct	s_sq
{
	int			p;
	int			size;
	int			x;
	int			y;
}				t_sq;

int				miniatoi(char *str);
void			read_map(char *path, t_map *map);
void			check_map(t_fl *fl, t_map *map);
void			algo(t_fl *fl, t_map *map, t_sq *bsq);
void			ft_puterr(void);
void			read_fl(char *map, t_fl *fl);
t_fl			*init_t_fl();
t_map			*init_t_map();
t_sq			*init_t_sq();

#endif
