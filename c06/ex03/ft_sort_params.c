/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejeong <yejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 16:22:04 by yejeong           #+#    #+#             */
/*   Updated: 2021/03/03 21:13:55 by yejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		my_strcmp(char *arg1, char *arg2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (1)
	{
		if (arg1[i] > arg2[i])
			return (1);
		else if (arg1[i] < arg2[i])
			return (-1);
		else if (arg1[i] == arg2[i] && !arg1[i + 1] && !arg2[i + 1])
			return (0);
		i++;
	}
}

void	sort(int argc, char **argv)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (i < argc - 1)
	{
		j = 0;
		while (j < argc - 1 - i)
		{
			if (my_strcmp(argv[j], argv[j + 1]) == 1)
			{
				temp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	sort(argc, argv);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
