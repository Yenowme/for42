/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejeong <yejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 11:08:25 by yejeong           #+#    #+#             */
/*   Updated: 2021/02/22 18:59:36 by yejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	str_rev(char *a, int i)
{
	char c[12];
	int j;

	j = 0;
	if (a[0] == '-')
	{
		c[0] = '-';
		j++;
		a[0] = '\0';
	}
	while (i >= 0)
	{
		c[j] = a[i];
		i--;
		j++;
	}
	i = --j;
	while (j >= 0)
	{
		a[j] = c[i];
		i--;
		j--;
	}
}

void	ft_putnbr(int nb)
{
	char b[12];
	int i;

	i = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return;
	}
	if (nb < 0)
	{
		b[i] = '-';
		nb *= -1;
		i++;
	}

	while (nb / 10 > 0)
	{
		b[i] = '0' + nb % 10;
		nb = nb / 10;
		i++;
	}
	b[i] = nb + '0';
	str_rev(b, i);
	write(1, &b, i + 1);
}
