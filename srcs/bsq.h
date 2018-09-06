#ifndef BSQ_H
# define BSQ_H

# include 		<unistd.h>
# include 		<stdlib.h>
# include 		<stdio.h>
# include 		<fcntl.h>
# include 		"ft.h"

typedef struct 	s_map
{
	int			nb_cases;
	int			map_y;
	char		*map;
	int			map_x;
}				t_map;

typedef struct 	s_fl
{
	int			size;
	char		obs;
	char		empty;
	char		fill;
}				t_fl;

typedef struct	s_bsq
{
	int			posx;
	int			posy;
	int			size;
}				t_bsq;


void			read_fl(char *map, t_fl *fl);
t_fl			*init_t_fl();
t_map			*init_t_map();
t_bsq			*init_t_bsq();
int				miniatoi(char *str);
void			read_map(char *path, t_map *map);
void			check_map(t_fl *fl, t_map *map);
void			ft_puterr(void);

#endif
