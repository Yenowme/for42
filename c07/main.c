#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

char *ft_strdup(char *src);
int *ft_range(int min, int max);
int ft_ultimate_range(int **range, int min, int max);
char *ft_strjoin(int size, char **strs, char *sep);
char *ft_convert_base(char *nbr, char *base_from, char *base_to);
char **ft_split(char *str, char *charset);

int	main(void)
{
	printf("\n=====0=======\n");
	printf("%s\n", ft_strdup("hello"));
	printf("%s\n", ft_strdup("waaaaaaaaaaaaaahoooh"));
	printf("\n=====1=======\n");
	for(int i=0; i < 3; i++)
		printf("%d\n",ft_range(0, 4)[i]);
	for(int i=0; i <  2; i++)
		printf("%d\n",ft_range(645,647)[i]);
	for(int i=0; i <  3; i++)
		printf("%d\n",ft_range(2147483645,2147483647)[i]);
	for(int i=0; i < 3; i++)
		printf("%d\n",ft_range(-2147483648, -2147483643)[i]);
	printf("\n=====2=======\n");
	int *a = {0};

	for(int i=0; i < ft_ultimate_range(&a, 0, 4); i++)
		printf("%d\n", a[i]);
	for(int i=0; i < ft_ultimate_range(&a,2147483645,2147483647); i++)
		printf("%d\n", a[i]);
	for(int i=0; i < ft_ultimate_range(&a, -2147483648, -2147483645); i++)
		printf("%d\n", a[i]);
	printf("\n=====3=======\n");
	char *str[] = { "hell", "hi"};

	printf("%s",ft_strjoin(2,str,"&"));
	char *str1[] = { "hell", "hi", "you", "dsfs23::"};

	printf("\n%s",ft_strjoin(4,str1,"..."));
	printf("\n=====4=======\n");
	
	printf("%s\n",ft_convert_base("   --101","01","012345"));
	printf("%s\n",ft_convert_base("  --+10101011","01","012345"));
	printf("%s\n",ft_convert_base("-2147483647","0123456789","abtxg"));
	printf("%s\n",ft_convert_base("-2147483648","0123456789","0123456789"));

	printf("\n=====5=======\n");
	for(int i = 0; i < 6; i++)
	{
		printf("%s\n", ft_split("hi,my name,..is,u,you,hi", ",.")[i]);

	}
	printf("\n");
	return 0;
}
