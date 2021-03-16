/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejeong <yejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 16:20:18 by yejeong           #+#    #+#             */
/*   Updated: 2021/03/16 22:44:19 by yejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	print_str(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
	write(1, "\n", 1);
}

void	print_size(int size)
{
	char a;

	if (size == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (size < 10)
	{
		a = '0' + size;
		write(1, &a, 1);
	}
	else
	{
		print_size(size / 10);
		a = '0' + (size % 10);
		write(1, &a, 1);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = -1;
	while (par[++i].str != 0)
	{
		print_str(par[i].str);
		print_size(par[i].size);
		write(1, "\n", 1);
		print_str(par[i].copy);
	}
}
