/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejeong <yejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 21:27:40 by yejeong           #+#    #+#             */
/*   Updated: 2021/03/15 04:47:08 by yejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*rt;
	int		i;

	i = 0;
	while (src[i])
		i++;
	if (!(rt = malloc(sizeof(char) * i + 1)))
		return (0);
	i = 0;
	while (src[i])
	{
		rt[i] = src[i];
		i++;
	}
	rt[i] = '\0';
	return (rt);
}
