/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejeong <yejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 16:01:19 by yejeong           #+#    #+#             */
/*   Updated: 2021/03/11 23:40:09 by yejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		find_str(char *str, char *to_find)
{
	int i;
	int sum;
	int size;

	i = 0;
	sum = 0;
	size = 0;
	while (to_find[size])
	{
		size++;
	}
	while (to_find[i] && str[i] && str[i] == to_find[i])
	{
		sum++;
		i++;
	}
	if (size == sum)
		return (1);
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;

	i = 0;
	if (*to_find == 0)
		return (str);
	while (str[i])
	{
		if (find_str(&str[i], to_find))
			return (&str[i]);
		i++;
	}
	return (0);
}
