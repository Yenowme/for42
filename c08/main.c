#include "./ex00/ft.h"
#include "./ex01/ft_boolean.h"
#include "./ex02/ft_abs.h"
#include "./ex03/ft_point.h" //3
#include "./ft_stock_str.h"//4
#include <stdio.h>

struct s_stock_str *ft_strs_to_tab(int ac, char **av);
void ft_show_tab(struct s_stock_str *par);

void set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

void ft_putstr(char *str)
{
	while (*str)
	write(1, str++, 1);
}

t_bool ft_is_even(int nbr)
{
	return ((EVEN(nbr)) ? TRUE : FALSE);
}

int		main(int argc, char **argv)
{
	printf("\n=============1==================\n");	
	(void)argv;
	if (ft_is_even(argc - 1) == TRUE)
		ft_putstr(EVEN_MSG);
	else
		ft_putstr(ODD_MSG);
	printf("%d", SUCCESS);
	printf("\n=============2==================\n");	
	printf("%d\n", ABS(-2));
	printf("%d\n", ABS(1235));
	printf("%d\n", ABS(-24344));
	printf("%d\n", ABS(-2147483647));
	printf("%d\n", ABS(2147483647));
	printf("\n=============3==================\n");
		t_point point;
		set_point(&point);
		printf("%d\n", point.x);
		printf("%d\n", point.y);
	printf("\n=============4==================\n");	
		char *abc[] = { "abc", "effx", "yougo" };
		ft_show_tab(ft_strs_to_tab(3,abc));
		
	printf("\n=============5==================\n");	
	printf("\n=============6==================\n");	
	printf("\n=============7==================\n");	


