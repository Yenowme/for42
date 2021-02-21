#include <stdio.h>

void ft_print_reverse_alphabet(void);
void ft_print_alphabet(void);
void ft_print_numbers(void);
void ft_is_negative(int n);
void ft_print_comb(void);
void ft_print_comb2(void);

int	main(void)
{
	printf("\n=====1=======\n");
	ft_print_alphabet();
	printf("\n=====2=======\n");
 	ft_print_reverse_alphabet();
	printf("\n=====3=======\n");
	ft_print_numbers();
	printf("\n=====4=======\n");
 	ft_is_negative(100);
 	ft_is_negative(0);
 	ft_is_negative(-1);
	printf("\n=====5=======\n");
	ft_print_comb();
	printf("\n=====6=======\n");
	ft_print_comb2();
	return 0;
}
