/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejeong <yejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 21:38:24 by yejeong           #+#    #+#             */
/*   Updated: 2021/03/15 02:35:16 by yejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int size;
	int *rt;
	int i;

	if (min >= max)
		return (0);
	size = max - min;
	if (!(rt = malloc(sizeof(int) * size + 1)))
		return (0);
	i = 0;
	while (i < size)
	{
		rt[i] = min;
		i++;
		min++;
	}
	return (rt);
}
