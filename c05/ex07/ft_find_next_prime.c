/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejeong <yejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 12:48:58 by yejeong           #+#    #+#             */
/*   Updated: 2021/03/11 15:37:59 by yejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	if_prime(int nb)
{
	long long int i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!if_prime(nb))
	{
		nb++;
	}
	return (nb);
}
