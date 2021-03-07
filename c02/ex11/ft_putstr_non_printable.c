/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejeong <yejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 13:20:03 by yejeong           #+#    #+#             */
/*   Updated: 2021/03/07 22:14:29 by yejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_non_printable(unsigned char str)
{
	if (str < 32 || str >= 127)
	{
		write(1, "/", 1);
		write(1, &"0123456789abcdef"[str / 16], 1);
		write(1, &"0123456789abcdef"[str % 16], 1);
	}
	else
		write(1, &str, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		print_non_printable(str[i]);
		i++;
	}
}
