/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejeong <yejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 10:45:39 by yejeong           #+#    #+#             */
/*   Updated: 2021/03/11 12:01:18 by yejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check_base(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	print_base(int nbr, char *base, int size)
{
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	if (nbr < size)
	{
		write(1, &base[nbr], 1);
	}
	else
	{
		print_base(nbr / size, base, size);
		write(1, &base[nbr % size], 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int size;

	size = 0;
	if (check_base(base))
		return ;
	while (base[size])
	{
		if (base[size] == '+' || base[size] == '-')
			return ;
		size++;
	}
	if (size <= 1)
		return ;
	if (nbr == -2147483648)
	{
		print_base(nbr / size, base, size);
		print_base((nbr % size) * -1, base, size);
		return ;
	}
	print_base(nbr, base, size);
}
