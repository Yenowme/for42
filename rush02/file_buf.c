/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_buf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejeong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 11:38:39 by yejeong           #+#    #+#             */
/*   Updated: 2021/03/14 15:51:11 by yejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash.h"

//dict를 my_dict에 복사
int file_open_sub(char  *dict, char *my_dict, int msize)
{
	int fd;
	int rt;

	if (!(fd = open(dict, O_RDONLY)))
			return (0);
	rt = read(fd, my_dict, msize);
	close(fd);
	return (1);
}

//dict 열기, 말
char *file_open(char *dict)
{
	int fd;
	char buf;
	int rt;
	int msize;
	char *my_dict;

	rt = 1;
	msize = 0;
	if (!(fd = open(dict, O_RDONLY))) //파일 오픈 성공 체
		return (0);
	while (rt != 0)
	{
		rt = read(fd, &buf, 1);
		msize++; 
	}
	close(fd);
	if (!(my_dict = (char *)malloc(sizeof(char) * ++msize))) //말록 체크
		return (0);
	if(!(file_open_sub(dict, my_dict, msize)))
		return (0);
	return (my_dict); //성공

}

int	set_key(char **key, char *my_dict)
{
	int i;
	int msize;
	
	i = -1;
	msize = 0;
	while(my_dict[++i] != ':')
		msize++;
	if (!(*key = (char *)malloc(sizeof(char) * ++msize)))
		return (0);
	i = -1;
	while(my_dict[++i] != ':')
		key[0][i] = my_dict[i];
	return (i);
}

int		white_space(char c)
{
	return ((c >= 9 && c <= 13) || c == ' ');
}

int	print_able(char c)
{
	return (c > 32 && c <= 126);  
}

char	*ft_trim(char *str)
{
	int i;
	int msize;
	char *rt;

	msize = 0;
	i = 0;
	while(white_space(str[i]))
			i++;
	while (str[i]) // 다 저장 
	{
		if(white_space(str[i]) && white_space(str[i+1]))
		{
			i++;
			continue;
		}
		msize++;
		i++;
	}
	rt = (char*)malloc(sizeof(char) * ++msize);
	i = -1;
	while (*str)
	{
		if(white_space(*str) && (white_space(*(str + 1)) || *(str + 1)))
		{
			str++;
			continue;
		}
		else if(white_space(*str) && print_able(*(str + 1)))
			rt[++i] = ' ';
		rt[++i] = *str;
		str++;
	}
	rt[++i] = '\0';
	return (rt);
}

//유효성 이후에 key,value 값 저장
int	set_value(char **key, char *my_dict)
{
	int i;
	int msize;
	
	i = -1;
	msize = 0;
	while(my_dict[++i] != '\n')
		msize++;
	if (!(*key = (char *)malloc(sizeof(char) * ++msize)))
		return (0);
	i = -1;
	while(my_dict[++i] != '\n')
		key[0][i] = my_dict[i];
	return (i);
}

t_node *make_node(char *my_dict, int *i) //유효한 dict 받아서 key에 하나하나 저장
{
	t_node *n; //새 노드 
	char *key;
	char *value;
	int  set_rt;

	n = (t_node*)malloc(sizeof(t_node));
/*	if (!(n = new_node()))// 이거 전에 풀 셋팅 먼저 해야함 
		return (0);*/
	if(!(set_rt = set_key(&key, &my_dict[*i])))
		return (0);//:전까지 사이즈 재서 말록
	*i += set_rt + 1; //:전까지 전체 저장, : 띄우
	set_rt = 0;
	if (!(set_rt = set_value(&value, &my_dict[*i])))
		return (0);
	*i += set_rt;//\n전까지 전체 저장 , i ==\n
	n->key = ft_trim(key);//트림해서 저장
	n->value = ft_trim(value);
	free(key); //복사했으니 프리
	free(value);
	return (n);
}


int	main(void)
{
	char *my_dict;
	t_node *n;
	int i;

	i = 0;
	if (!(my_dict = file_open("numbers.dict")))
	{
		write(1, "Dict Error\n", 11);
		return (0);
	}
	printf("%s", my_dict);
	n = make_node(my_dict, &i);
	printf("key =%s, value=%s", n->key, n->value);
	free (my_dict);
	
	system("leaks a.out > leaks_result; cat leaks_result | grep leaked && rm -rf leaks_result");
}
