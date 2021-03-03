/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejeong <yejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 18:56:51 by yejeong           #+#    #+#             */
/*   Updated: 2021/03/02 19:12:36 by yejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int rt;

	rt = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		rt = rt * nb;
		nb -= 1;
	}
	return (rt);
}
