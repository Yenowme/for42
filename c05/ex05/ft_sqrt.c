/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejeong <yejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 23:16:35 by yejeong           #+#    #+#             */
/*   Updated: 2021/03/12 00:27:53 by yejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long long int	i;

	i = 1;
	if (nb < 0)
		return (0);
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
