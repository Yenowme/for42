/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejeong <yejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 14:09:23 by yejeong           #+#    #+#             */
/*   Updated: 2021/03/09 22:39:05 by yejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;

	i = 0;
	if (n == 0)
		return (0);
	while (n > 0)
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		else if (n - 1 == 0 || (!s1[i + 1] && !s2[i + 1]))
			return (0);
		n--;
		i++;
	}
	return (1);
}
