#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int ft_strlen(char *str);
void ft_putstr(char *str);
void ft_putnbr(int nb);
int ft_atoi(char *str);
void ft_putnbr_base(int nbr, char *base);//4
int ft_atoi_base(char *str, char *base);

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
	printf("atoi = %d",ft_atoi("+df d8e3"));
	printf("atoi = %d",ft_atoi(" -2147483648e3"));
	printf("atoi = %d",ft_atoi(" +++2147483647--	"));
	printf("atoi = %d",ft_atoi(" ++--+0--	"));
	printf("\n=====4=======\n");
	ft_putnbr_base(-6435,"-123");
	ft_putnbr_base(-6435,"0123");
	ft_putnbr_base(236435,"abdbfi2s");
	ft_putnbr_base(6435,"0123456789");
	printf("\n=====5=======\n");
	printf("%d\n", ft_atoi_base("ff", "0123456789abcdef"));
	printf("%d\n", ft_atoi_base("a0a", "0a"));
	printf("%d\n", ft_atoi_base("   +---qwerty", "qwertyuiop"));
	printf("%d\n", ft_atoi_base("   +---2147483648", "0123456789"));
	printf("%d\n", ft_atoi_base("   +----2147483647", "0123456789"));
	printf("%d\n", ft_atoi_base("123", "0123356789"));
	printf("%d\n", ft_atoi_base("12x", "0123356789"));
	printf("\n");
	return 0;
}
