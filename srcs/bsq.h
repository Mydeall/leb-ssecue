#ifndef BSQ_H
# define BSQ_H

# include 				<unistd.h>
# include 				<stdlib.h>
# include 				<stdio.h>
# include 					<fcntl.h>
# include 				"ft.h"



typedef struct 		s_list
{
	struct s_list		*next;
	void						*data;
}									t_list;

typedef struct 		s_fl
{
	int							size;
	char						obs;
	char						empty;
	char						fill;
}									t_fl;

void							read_fl(char *map, t_fl *first_line);
t_fl							*init_t_fl();

#endif
