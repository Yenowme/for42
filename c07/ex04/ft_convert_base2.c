/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejeong <yejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 10:45:39 by yejeong           #+#    #+#             */
/*   Updated: 2021/03/16 21:02:19 by yejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		check_base_ok(char *base, int *base_size);
int		my_atoi_base(char *str, char *base);
int		g_b_size = 0;

void	nbr_char(int nbr, char *base, char **rt, int *i)
{
	if (nbr < 0)
	{
		rt[0][*i] = '-';
		nbr *= -1;
		*i += 1;
	}
	if (nbr < g_b_size)
	{
		rt[0][*i] = base[nbr];
		*i += 1;
	}
	else
	{
		nbr_char(nbr / g_b_size, base, rt, i);
		rt[0][*i] = base[nbr % g_b_size];
		*i += 1;
	}
}

void	nbr_m_size(int nbr, char *base, int *m_size)
{
	if (nbr < 0)
	{
		nbr *= -1;
		(*m_size)++;
	}
	if (nbr < g_b_size)
		(*m_size)++;
	else
	{
		nbr_m_size(nbr / g_b_size, base, m_size);
		(*m_size)++;
	}
}

char	*putnbr_base_rt(int nbr, char *base_to)
{
	char	*rt;
	int		m_size;
	int		i;

	i = 0;
	m_size = 0;
	if (check_base_ok(base_to, &g_b_size))
		return (0);
	if (g_b_size <= 1)
		return (0);
	if (nbr == -2147483648)
	{
		nbr_m_size(nbr / g_b_size, base_to, &m_size);
		rt = (char *)malloc(sizeof(char) * (m_size + 1));
		nbr_char(nbr / g_b_size, base_to, &rt, &i);
		nbr_char((nbr % g_b_size) * -1, base_to, &rt, &i);
		rt[i] = 0;
		return (rt);
	}
	nbr_m_size(nbr, base_to, &m_size);
	rt = (char *)malloc(sizeof(char) * m_size);
	nbr_char(nbr, base_to, &rt, &i);
	rt[i] = 0;
	return (rt);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb;
	char	*rt;

	nb = my_atoi_base(nbr, base_from);
	if (nb == -1)
		return (0);
	rt = putnbr_base_rt(nb, base_to);
	return (rt);
}
