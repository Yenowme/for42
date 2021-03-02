#include <stdio.h>
#include <string.h>
#include <unistd.h>

int ft_strcmp(char *s1, char *s2);
int ft_strncmp(char *s1, char *s2, unsigned int n);
char *ft_strcat(char *dest, char *src);
char *ft_strncat(char *dest, char *src, unsigned int nb);
char *ft_strstr(char *str, char *to_find);
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	printf("\n=====0=======\n");
	printf("%d\n", ft_strcmp("aa", "ab"));
	printf("%d\n", ft_strcmp("aa", "aa"));
	printf("%d\n", ft_strcmp("12fxa", "0ds23ab"));
	printf("\n=====1=======\n");
	printf("%d\n", ft_strncmp("aaisadf", "abvds", 3));
	printf("%d\n", ft_strncmp("aass", "aass", 2));
	printf("%d\n", ft_strncmp("12fxa", "0ds23ab", 1));
	printf("\n=====2=======\n");
	char cat_dest[20] = "Hello";

	printf("%s\n",ft_strcat(cat_dest,"world"));
	printf("\n=====3=======\n");
	char catn_dest[20] = "hi";
	printf("%s\n",ft_strncat(catn_dest,"world", 3));
	printf("\n=====4=======\n");
	printf("%s\n",ft_strstr("helloworld","wo"));
	printf("%s\n",ft_strstr("helloworld","wa:orld"));
	printf("%s\n",ft_strstr("helloworld","ll"));
	printf("%s\n",ft_strstr("hellowo","hellowoo"));
	printf("%s\n",ft_strstr("hellowo",""));
	printf("\n=====5=======\n");
	printf("%u\n",ft_strlcat(catn_dest,"world", 3));
	printf("%s\n",catn_dest);

	return 0;
}
