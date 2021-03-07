/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejeong <yejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 15:02:34 by yejeong           #+#    #+#             */
/*   Updated: 2021/03/07 22:14:00 by yejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_addr(void *addr, char *print_add)
{
	int				i;
	long long int	int_add;

	int_add = (long long int)addr;
	i = 15;
	while (i >= 0)
	{
		if (int_add > 0)
		{
			print_add[i] = "0123456789abcdef"[int_add % 16];
			int_add /= 16;
		}
		else
			print_add[i] = '0';
		i--;
	}
}

void	print_hex(char *carr, int i)
{
	if (i % 2 == 0)
		write(1, " ", 1);
	write(1, &"0123456789abcdef"[carr[i] / 16], 1);
	write(1, &"0123456789abcdef"[carr[i] % 16], 1);
	if (carr[i] <= 31 || carr[i] == 127)
		carr[i] = '.';
}

void	print_word_hex(void *arr, int size)
{
	int		i;
	char	*carr;
	int		ssize;

	carr = (char *)arr;
	i = 0;
	if (size >= 16)
		ssize = 16;
	else
		ssize = size;
	while (i < ssize)
	{
		print_hex(carr, i);
		i++;
	}
	if (i < 16)
	{
		if (i % 2 == 0)
			write(1, " ", 1);
		write(1, "    ", 4);
		i++;
	}
	write(1, " ", 1);
	write(1, carr, ssize);
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	char			print_add[16];

	i = size;
	if (size == 0)
	{
		return (0);
	}
	while (i > 0)
	{
		print_addr(addr, print_add);
		write(1, print_add, 16);
		write(1, ":", 2);
		print_word_hex(addr, i);
		if (i / 16 > 0)
			i -= 16;
		else
			i -= i;
		addr += 16;
	}
	return (addr);
}
