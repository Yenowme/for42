/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejeong <yejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 19:14:34 by yejeong           #+#    #+#             */
/*   Updated: 2021/03/02 19:23:33 by yejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int rt;

	rt = 1;
	if (nb < 0)
		return (0);
	while (power > 0)
	{
		rt *= nb;
		power--;
	}
	return (rt);
}
