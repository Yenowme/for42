/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejeong <yejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 18:25:38 by yejeong           #+#    #+#             */
/*   Updated: 2021/03/02 11:54:40 by yejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_int(char *str, int *rt)
{
	int i;

	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		*rt += (int)str[i] - '0';
		if (str[i + 1] >= '0' && str[i + 1] <= '9')
			*rt *= 10;
		i++;
	}
}

int		ft_atoi(char *str)
{
	int i;
	int sum;
	int rt;

	sum = 0;
	i = 0;
	rt = 0;
	while (str[i] == '\t' || str[i] == '\n' ||
		str[i] == '\v' || str[i] == '\f' ||
		str[i] == '\r' || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sum++;
		i++;
	}
	if (str[i] >= '0' && str[i] <= '9')
	{
		print_int(&str[i], &rt);
		if (sum % 2 == 1)
			rt *= -1;
	}
	return (rt);
}
