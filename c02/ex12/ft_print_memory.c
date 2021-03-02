/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejeong <yejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 15:02:34 by yejeong           #+#    #+#             */
/*   Updated: 2021/03/01 14:03:08 by yejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h> //clear

void	print_addr(void *addr, char *print_add)
{
	int 		i;
	long int 	int_add;

	int_add = (long int)addr;
	i = 16;
	while(i >= 0) 
	{
		if(int_add > 0)
		{
			print_add[i-1] = "0123456789abcdef"[int_add % 16];
			int_add /= 16;
		}
		else
			print_add[i-1] = '0';
		i--;
	}	
}

void	print_word_hex(void *arr, int size) // size = 3
{
	int i;
	char *carr;

	carr = (char *)arr;
	i = 0;
	while (i < size) //문자열 16진법 변환, 출력불가 문자열 변경
	{
		if (i % 2 == 0) //두글자마다 띄어쓰기
			write(1, " ", 1);
		write(1, &"0123456789abcdef"[carr[i]/16], 1);
		write(1, &"0123456789abcdef"[carr[i]%16], 1);
		if (carr[i] <= 31 || carr[i] == 127)
			carr[i] = '.';
		i++;
	}
	while (size < 16)
	{

	}	
	write(1, " ",1);
	write(1,carr,16);
	write(1, "\n",1);
}

void	*ft_print_memory(void *addr, unsigned int size) //size의 역할이 뭐지..
{
	int 	i;
	char 	print_add[16];

	i = (int)size;
	if (size == 0)
	{
		return (0);
	}
	while(i > 0)
	{
		print_addr(addr,print_add);
		write(1, print_add, 16);
		write(1, ": ", 2);
		print_word_hex(addr,size % 17);
		addr += 16;
		i -= 16;
	}
	return (addr);
}

int	main(void)
{
	char *a = "hello babasd";
	void *arr;

	arr = a;
	ft_print_memory(arr,12);
	return 0;
}
