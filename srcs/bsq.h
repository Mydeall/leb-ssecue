#ifndef BSQ_H
# define BSQ_H

# include 				<unistd.h>
# include 				<stdlib.h>
# include 				<stdio.h>
# include 				<fcntl.h>
# include 				"ft.h"

typedef struct 		s_map
{
	int							nb_cases;
	int							nb_lines;
}									t_map;

typedef struct 		s_fl
{
	int							size;
	char						obs;
	char						empty;
	char						fill;
	int							size_fl;
}									t_fl;

void							read_fl(char *map, t_fl *first_line);
t_fl							*init_t_fl();
t_map							*init_t_map();
int								miniatoi(char *str);
void							read_map(char *path, t_map *map);

#endif
