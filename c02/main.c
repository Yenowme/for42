#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *dest, char *src);
char *ft_strncpy(char *dest, char *src, unsigned int n);
int ft_str_is_alpha(char *str);
int ft_str_is_numeric(char *str);
int ft_str_is_lowercase(char *str);
int ft_str_is_uppercase(char *str);
int ft_str_is_printable(char *str);
// 8,9 풀었음
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size); //10
void ft_putstr_non_printable(char *str);

int	main(void)
{
	printf("\n=====0=======\n");
	char des[10] = "hi";
	printf("%s\n",ft_strcpy(des,"hello"));
	printf("%s\n",ft_strcpy(des,"~"));
	printf("\n=====1=======\n");
	printf("%s\n",ft_strncpy(des,"hello",3));
	printf("%s\n",ft_strncpy(des,"~",1));
	printf("%s\n",ft_strncpy(des,"~",5));
	printf("\n=====2=======\n");
	printf("%d\n", ft_str_is_alpha("abZ"));
	printf("%d\n", ft_str_is_alpha("ad#"));
	printf("\n=====3=======\n");
	printf("%d\n", ft_str_is_numeric("0234"));
	printf("%d\n", ft_str_is_numeric("12xe:"));
	printf("\n=====4=======\n");
	printf("%d\n",ft_str_is_lowercase("azzedf"));
	printf("%d\n",ft_str_is_lowercase("x12x"));
	printf("%d\n",ft_str_is_lowercase("xxZ"));
	printf("%d\n",ft_str_is_lowercase(""));
	printf("\n=====5=======\n");
	printf("%d\n",ft_str_is_uppercase("AZFS"));
	printf("%d\n",ft_str_is_uppercase("AD.Z"));
	printf("%d\n",ft_str_is_uppercase("123"));
	printf("%d\n",ft_str_is_uppercase(""));
	printf("\n=====6=======\n");

	char pa[5] = { 10, 65, 65, 74};
	char pn[5] = { 10, 9, 127 , 0};
	printf("%d\n",ft_str_is_printable(pa));
	printf("%d\n",ft_str_is_printable(pn));
	printf("\n=====7=======\n");
	printf("\n=====8=======\n");
	printf("\n=====9=======\n");
	printf("\n=====10=======\n");
	char srl_dest[9] = {0};
	printf("%u\n" , ft_strlcpy(srl_dest, "hiro", 3));
	printf("%s\n" , srl_dest);
	
	printf("\n=====11=======\n");
	char stl11[] = { 16, 'b', 'a', 'E', 7, 127, 15, 24, 31, 0};
	char stl12[] = "Coundsf \ntdsf BDis ?";
	ft_putstr_non_printable(stl11);
	printf("\n");
	ft_putstr_non_printable(stl12);
	printf("\n=====12=======\n");
	return 0;
}
