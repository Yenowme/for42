/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejeong <yejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 22:26:45 by yejeong           #+#    #+#             */
/*   Updated: 2021/03/11 20:46:02 by yejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		strs_malloc(int size, char **strs, char *sep, char **rt)
{
	int i;
	int j;
	int m_size;

	i = 0;
	m_size = 0;
	while (i++ < size)
	{
		j = 0;
		while (strs[i][j++])
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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*rt;
	int		i;
	int		j;
	int		k;
	int		o;

	i = -1;
	k = -1;
	if (!strs_malloc(size, strs, sep, &rt))
		return (0);
	while (++i < size)
	{
		j = -1;
		o = -1;
		while (strs[i][++j])
			rt[++k] = strs[i][j];
		while (sep[++o] && size - 1 != i)
			rt[++k] = sep[o];
	}
	return (rt);
}
