/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejeong <yejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 13:20:03 by yejeong           #+#    #+#             */
/*   Updated: 2021/02/27 14:59:45 by yejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr_non_printable(char *str2)
{
	int i;
	unsigned char *str; 

	str = (unsigned char *)str2;
	i = 0;
	while(str[i])
	{
		if (str[i] < 32 || str[i] == 127)	
		{
			write(1, "/", 1);
			write(1, &"0123456789abcdef"[str[i]/16], 1);
			write(1, &"0123456789abcdef"[str[i]%16], 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
