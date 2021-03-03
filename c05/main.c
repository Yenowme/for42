#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int ft_iterative_factorial(int nb);//0
int ft_recursive_factorial(int nb);//1
int ft_iterative_power(int nb, int power);//2
int ft_recursive_power(int nb, int power);//3
int ft_fibonacci(int index);//4
int ft_sqrt(int nb);//5
int ft_is_prime(int nb);//6
int ft_find_next_prime(int nb);//7
int ft_ten_queens_puzzle(void);

int	main(void)
{
	printf("\n=====0=======\n");
	printf("%d\n", ft_iterative_factorial(0));
	printf("%d\n", ft_iterative_factorial(9));
	printf("%d\n", ft_iterative_factorial(11));
	printf("%d\n", ft_iterative_factorial(-3));
	printf("\n=====1=======\n");
	printf("%d\n", ft_recursive_factorial(0));
	printf("%d\n", ft_recursive_factorial(9));
	printf("%d\n", ft_recursive_factorial(11));
	printf("%d\n", ft_recursive_factorial(-7));
	printf("\n=====2=======\n");
	printf("%d\n", ft_iterative_power(2,4));
	printf("%d\n", ft_iterative_power(10,9));
	printf("%d\n", ft_iterative_power(12,4));
	printf("%d\n", ft_iterative_power(0,0));
	printf("%d\n", ft_iterative_power(3,0));
	printf("\n=====3=======\n");
	printf("%d\n", ft_recursive_power(2,4));
	printf("%d\n", ft_recursive_power(10,9));
	printf("%d\n", ft_recursive_power(12,4));
	printf("%d\n", ft_recursive_power(0,0));
	printf("%d\n", ft_recursive_power(3,0));
	printf("\n=====4=======\n");
	printf("%d\n", ft_fibonacci(21));
	printf("%d\n", ft_fibonacci(3));
	printf("%d\n", ft_fibonacci(4));
	printf("%d\n", ft_fibonacci(0));
	printf("%d\n", ft_fibonacci(-23456));
	printf("\n=====5=======\n");
	printf("%d\n", ft_sqrt(12));
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(4));
	printf("%d\n", ft_sqrt(121));
	printf("%d\n", ft_sqrt(10000));
	printf("\n=====6=======\n");
	printf("%d\n", ft_is_prime(121));
	printf("%d\n", ft_is_prime(5));
	printf("%d\n", ft_is_prime(1));
	printf("%d\n", ft_is_prime(9));
	printf("%d\n", ft_is_prime(97));
	printf("\n=====7=======\n");
	printf("%d\n", ft_find_next_prime(97));
	printf("%d\n", ft_find_next_prime(7));
	printf("%d\n", ft_find_next_prime(1));
	printf("%d\n", ft_find_next_prime(0));
	printf("%d\n", ft_find_next_prime(92));
	printf("%d\n", ft_find_next_prime(98));
	printf("\n=====8=======\n");
	printf("\n%d", ft_ten_queens_puzzle());
	printf("\n");
	return 0;
}
