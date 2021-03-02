#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int ft_strlen(char *str);
void ft_putstr(char *str);
void ft_putnbr(int nb);
int ft_atoi(char *str);
void ft_putnbr_base(int nbr, char *base);//4

int	main(void)
{
	printf("\n=====0=======\n");
	printf("%d", ft_strlen("hello"));
	printf("\n=====1=======\n");
 	ft_putstr("dsfleasldf dfjsc fif");	
	printf("\n=====2=======\n");
	ft_putnbr(38543);
	printf("\n");
	ft_putnbr(33);
	printf("\n");
	ft_putnbr(2147483647);
	printf("\n");
	ft_putnbr(-2147483648);
	printf("\n");
	ft_putnbr(-38543);
	printf("\n");
	ft_putnbr(0);
	printf("\n=====3=======\n");
	printf("atoi = %d",ft_atoi(" +-3502 e3"));
	printf("\n=====4=======\n");
	ft_putnbr_base(-6435,"-123");
	ft_putnbr_base(-6435,"0123");
	ft_putnbr_base(236435,"abdbfi2s");
	ft_putnbr_base(6435,"0123456789");
	printf("\n=====5=======\n");
	return 0;
}
