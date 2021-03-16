/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejeong <yejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 22:26:45 by yejeong           #+#    #+#             */
/*   Updated: 2021/03/16 18:49:45 by yejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		strs_malloc(int size, char **strs, char *sep, char **rt)
{
	int i;
	int j;
	int m_size;

	i = -1;
	m_size = 0;
	while (++i < size)
	{
		j = -1;
		while (strs[i][++j])
			m_size++;
	}
	i = 0;
	while (sep[i])
		i++;
	m_size += i * (size - 1);
	*rt = malloc(sizeof(char) * (m_size + 1));
	if (!*rt)
		return (0);
	else
		return (1);
}

void	my_join(int size, char **strs, char *sep, char *rt)
{
	int	j;
	int	o;
	int i;

	i = -1;
	while (++i < size)
	{
		j = -1;
		o = -1;
		while (strs[i][++j])
			*rt++ = strs[i][j];
		while (sep[++o] && size - 1 != i)
			*rt++ = sep[o];
	}
	*rt = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*rt;

	if (size <= 0)
	{
		if (!(rt = malloc(sizeof(char) * 1)))
			return (0);
		rt[0] = 0;
		return (rt);
	}
	if (!strs_malloc(size, strs, sep, &rt))
		return (0);
	my_join(size, strs, sep, rt);
	return (rt);
}
