/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejeong <yejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 12:00:24 by yejeong           #+#    #+#             */
/*   Updated: 2021/03/09 17:54:04 by yejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_base_ok(char *base, int *base_size)
{
	int i;
	int j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (1);
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	if (i > 1)
	{
		*base_size = i;
		return (0);
	}
	return (1);
}

int		str_is_base(char *str, int i, char *base)
{
	int j;

	j = 0;
	if (i < 0)
		return (-1);
	while (base[j])
	{
		if (str[i] == base[j])
			return (j);
		j++;
	}
	return (-1);
}

int		check_str(char *str, int *i)
{
	int sum;

	sum = 0;
	while (str[*i] == '\t' || str[*i] == '\n' ||
		str[*i] == '\v' || str[*i] == '\f' ||
		str[*i] == '\r' || str[*i] == ' ')
		(*i)++;
	while (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			sum++;
		(*i)++;
	}
	return (sum);
}

int		make_rt(int b_size, int j)
{
	if (j <= 0)
		return (1);
	else
	{
		return (b_size * make_rt(b_size, j - 1));
	}
}

int		ft_atoi_base(char *str, char *base)
{
	int rt;
	int b_size;
	int i;
	int s_size;
	int j;

	j = -1;
	rt = 0;
	s_size = 0;
	i = 0;
	check_str(str, &i);
	if (check_base_ok(base, &b_size))
		return (0);
	while (str_is_base(str, i++, base) != -1)
		s_size++;
	i = i - 2;
	while (++j < s_size)
	{
		rt += str_is_base(str, i, base) * make_rt(b_size, j);
		i--;
	}
	i = 0;
	if (check_str(str, &i) % 2 == 1)
		rt *= -1;
	return (rt);
}
