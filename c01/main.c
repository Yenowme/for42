#include <stdio.h>
void ft_ft(int *nbr);
void ft_ultimate_ft(int *********nbr);
void ft_swap(int *a, int *b);
void ft_div_mod(int a, int b, int *div, int *mod);
void ft_ultimate_div_mod(int *a, int *b);
void ft_putstr(char *str);
int ft_strlen(char *str);
void ft_rev_int_tab(int *tab, int size);
void ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int a;

	printf("\n=====0=======\n");
	ft_ft(&a);
	printf("%d",a);
	printf("\n=====1=======\n");
	int *********p9;
	int ********p8;
	int *******p7;
	int ******p6;
	int *****p5;
	int ****p4;
	int ***p3;
	int **p2;
	int *p1;
	int b;

	p1 = &b;
	p2 = &p1;
	p3 = &p2;
	p4 = &p3;
	p5 = &p4;
	p6 = &p5;
	p7 = &p6;
	p8 = &p7;
	p9 = &p8;
	ft_ultimate_ft(p9);
	printf("%d",*********p9);
	printf("\n=====2=======\n");
	int c=1,d=2;
	ft_swap(&c,&d);
	printf("c가 1에서 %d, d가 2에서 %d\n", c, d);
	printf("\n=====3=======\n");
	int div;
	int mod;
	
	ft_div_mod(c,d,&div,&mod);
	printf("c/d는 %d, c %% d는 %d", div, mod);
	printf("\n=====4=======\n");
	int e = 3;
	int f = 5;
	ft_ultimate_div_mod(&e,&f);
	printf("3/5는 %d, 3%%5는 %d", e, f);
	printf("\n=====5=======\n");
	char g[12] = "hello";

	ft_putstr(g);
	printf("\n=====6=======\n");
	printf("%d",ft_strlen(g));
	printf("\n=====7=======\n");
	int tab[3] = {1,2,3};
	int size = 3;
	
	ft_rev_int_tab(tab,size);
	printf("%d%d%d",tab[0],tab[1],tab[2]);
	printf("\n=====8=======\n");
	int tab2[5] = { 9, 5, 2, 7, 0 };
	int size2 = 5;

	ft_sort_int_tab(tab2, size2);
	printf("%d%d%d%d%d",tab2[0],tab2[1],tab2[2],tab2[3],tab2[4]);
	return 0;
}
