#include "ex00/ft.h"
//#include "ex01/ft_boolean.h"
#include "ex02/ft_abs.h"
#include "ex03/ft_point.h" //3
#include <stdio.h>
void set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}
int		main(void)
{
	printf("\n=============2==================");	
	printf("%d\n", ABS(-2));
	printf("%d\n", ABS(1235));
	printf("%d\n", ABS(-24344));
	printf("%d\n", ABS(-2147483647));
	printf("%d\n", ABS(2147483647));
	printf("\n=============3==================");
		t_point point;
		set_point(&point);
		printf("%d\n", point.x);
		printf("%d\n", point.y);
	printf("\n=============4==================");	
	printf("\n=============5==================");	
	printf("\n=============6==================");	
	printf("\n=============7==================\n");	

}
