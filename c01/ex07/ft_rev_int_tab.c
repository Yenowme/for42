/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejeong <yejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 15:50:55 by yejeong           #+#    #+#             */
/*   Updated: 2021/02/24 16:10:30 by yejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int temp[size];
	int i;

	i = 0;
	while (i <= size)
	{
		temp[i] = tab[size - i - 1];
		i++;
	}
	i = 0;
	while (i <= size)
	{
		tab[i] = temp[i];
		i++;
	}
}
