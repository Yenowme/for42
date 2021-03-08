/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejeong <yejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 15:11:13 by yejeong           #+#    #+#             */
/*   Updated: 2021/03/08 12:35:51 by yejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	set_size(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int nb)
{
	unsigned int dest_s;
	unsigned int src_s;
	unsigned int i;
	unsigned int j;

	src_s = set_size(src);
	dest_s = set_size(dest);
	i = 0;
	if (dest_s > nb)
		return (src_s + dest_s);
	j = dest_s;
	while (j < nb - 1)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (src_s + dest_s);
}
