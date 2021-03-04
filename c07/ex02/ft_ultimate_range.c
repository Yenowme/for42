/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejeong <yejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 21:38:24 by yejeong           #+#    #+#             */
/*   Updated: 2021/03/03 22:24:30 by yejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **rt, int min, int max)
{
	int size;
	int i;

	if (min >= max)
		return (0);
	size = max - min;
	*rt = malloc(sizeof(int) * size);
	if (*rt == 0)
		return (-1);
	i = 0;
	while (i < size)
	{
		rt[0][i] = min;
		i++;
		min++;
	}
	return (size);
}
