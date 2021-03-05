/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejeong <yejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 13:03:55 by yejeong           #+#    #+#             */
/*   Updated: 2021/03/05 16:50:46 by yejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		str_check(char *str, char *charset, int i)
{
	int j;

	j = 0;
	while (charset[j])
	{
		if (str[i] == charset[j])
			return (1);
		j++;
	}
	return (0);
}

int		vertical_size(char *str, char *charset)
{
	int	rt_size;
	int	i;
	int	j;

	i = 0;
	j = 0;
	rt_size = 0;
	while (str[i])
	{
		while (!str_check(str, charset, i))
			i++;
		while (str_check(str, charset, i))
			i++;
		rt_size++;
	}
	return (rt_size);
}

void	set_m_size(int **m_size, char *str, char *charset)
{
	int	i;
	int	k;

	k = 0;
	i = 0;
	*m_size = (int *)malloc(sizeof(int) * vertical_size(str, charset));
	while (str[i])
	{
		while (!str_check(str, charset, i))
		{
			i++;
			m_size[0][k]++;
		}
		while (str_check(str, charset, i))
			i++;
		k++;
	}
	return ;
}

char	**rt_malloc(int *m_size, int vert_size)
{
	char	**rt;
	int		i;

	i = 0;
	rt = (char **)malloc(sizeof(char *) * vert_size);
	while (i < vert_size)
	{
		rt[i] = (char *)malloc(sizeof(char) * m_size[i]);
		i++;
	}
	return (rt);
}

char	**ft_split(char *str, char *charset)
{
	int		*m_size;
	int		i;
	int		k;
	int		j;
	char	**rt;

	k = 0;
	i = -1;
	set_m_size(&m_size, str, charset);
	rt = rt_malloc(m_size, vertical_size(str, charset));
	while (++i < vertical_size(str, charset))
	{
		j = -1;
		while (++j < m_size[i])
			rt[i][j] = str[k++];
		rt[i][++j] = '\0';
		while (str_check(str, charset, k))
			k++;
	}
	return (rt);
}
