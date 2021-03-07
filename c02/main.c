#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *dest, char *src);
char *ft_strncpy(char *dest, char *src, unsigned int n);
int ft_str_is_alpha(char *str);
int ft_str_is_numeric(char *str);
int ft_str_is_lowercase(char *str);
int ft_str_is_uppercase(char *str);
int ft_str_is_printable(char *str);
char *ft_strupcase(char *str);
char *ft_strlowcase(char *str);
char *ft_strcapitalize(char *str);
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
void ft_putstr_non_printable(char *str);
void *ft_print_memory(void *addr, unsigned int size);

int	main(void)
{
	printf("\n=====0=======\n");
	char des[10] = "hi";
	printf("%s\n",ft_strcpy(des,"hello"));
	printf("%s\n",ft_strcpy(des,"~"));
	printf("\n=====1=======\n");
	char dest[330] = "hellloooo";
	printf("%s\n",ft_strncpy(dest,"abc",2));
	printf("%s\n",ft_strncpy(dest,"abc",5));
	printf("%s\n",ft_strncpy(dest,"~",1));
	printf("\n=====2=======\n");
	printf("%d\n", ft_str_is_alpha("abZ"));
	printf("%d\n", ft_str_is_alpha(""));
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

	char pa[5] = { 65, 65, 74, 0};
	char pn_1[5] = { 10, 127, 0};
	char pn[5] = { 10, 9, 0};
	printf("%d\n",ft_str_is_printable(pa));
	printf("%d\n",ft_str_is_printable(pn_1));
	printf("%d\n",ft_str_is_printable(pn));
	printf("\n=====7=======\n");
	char stup1[] = "abdsafD";
	char stup2[] = "3ddf.Gda";

	printf("%s\n",ft_strupcase(stup1));
	printf("%s\n",ft_strupcase(stup2));
	printf("%s\n",stup2);
	printf("\n=====8=======\n");
	printf("%s\n",ft_strlowcase(stup1));
	printf("%s\n",ft_strlowcase(stup2));
	printf("\n=====9=======\n");
	printf("\n=====10=======\n");
	char ldest[50] = "hello";

	printf("%u" ,ft_strlcpy(ldest, "ydddu", 2));
	printf("%s", ldest);
	printf("%u" ,ft_strlcpy(ldest, "ydddu", 9));
	printf("%s", ldest);
	printf("%u" ,ft_strlcpy(ldest, "ydddu", 0));
	printf("%s", ldest);
	printf("\n=====11=======\n");
	char nstr[14] = { 12, -4, -120, 120, 34, 87, 32, 64, 127, -126, 0};
	ft_putstr_non_printable(nstr);
	printf("\n=====12=======\n");
	char test09[] = "salus't, coM3mEnt tu \vvas ? 42mOts quA3\nanTe-Deux; ciqxu\tantt+un";
	ft_print_memory(test09, 62);
	printf("\n");
	char test08[] = "salus'tiasdfjasd;lfjkaff\n\n\n, coM3mEnt tu \vvas ? 42mOts quA3\nanTe-Deux; ciqxu\tantt+un";
	ft_print_memory(test08, 88);
	return 0;
}
