#include "bsq.h"

int		miniatoi(char *str)
{
	int res;
	int i;

	i = 0;
	res = 0;
	while (str[i] != '\0')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return(res);
}
