/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejeong <yejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 18:48:41 by yejeong           #+#    #+#             */
/*   Updated: 2021/02/22 21:49:58 by yejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n)
{
	char a[n];
	int i;
	int j;

	i = 0;
	j = 0;
	a[n - 1] = '0';
	if(a[0] == '9' - n + 1)
		ft_print_combn(n - 1);

	while (i < 10)
	{
		while (j < 10)
		{
			a[n - 1] ++;
			write(1, a, 2);
			j ++;
		}
		a[n-2]++;
		i++;
	}
}
int	main(void)
{
	ft_print_combn(2);
}
