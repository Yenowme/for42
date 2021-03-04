/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejeong <yejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 21:38:24 by yejeong           #+#    #+#             */
/*   Updated: 2021/03/03 22:25:31 by yejeong          ###   ########.fr       */
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
	rt = malloc(sizeof(int) * size);
	if (rt == 0)
		return (0);
	i = 0;
	while (i < size)
	{
		rt[i] = min;
		i++;
		if (i != size)
			min++;
	}
	return (rt);
}
