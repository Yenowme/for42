#include "hash.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

#define HASH_DIGIT 38

t_node			*hash_table[HASH_DIGIT];

// hash_table 널값으로 초기화
void			init_hash_table()
{
	int	i;

	i = 0;
	while (i < HASH_DIGIT)
		hash_table[i] = NULL;
}

// stack에서 구조체 포인터 가져와 사용(노드 생성)
/*
t_node			*new_node()
{
	t_node	*r;

	if (top == 0) // stack이 비었는지 확인하고 비었으면 널값 반환
		return (0);
	r = top;
	top = r->next;
	return (r);
}

// stack에 다시 돌려둠(노드삭제)
void			free_node(t_node *r)
{
	r->next = top;
	top = r;
}
*/

//문자열 순서 비교 함수
int				ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

//노드 hash_table에 연결
void			add(t_node *n, int digit)
{
	t_node	*r;

	r = hash_table[digit]; //인덱스가 digit인 hash_table 배열의 시작 노드
	n->next = r;
	r = n;
	hash_table[digit] = r;
}

//문자열의 자릿수 반환
int				find_digit(char *c)
{
	int	digit;

	digit = 0;
	while (*c)
	{
		c++;
		digit++;
	}
	return (digit);
}

int key_search(char *c);

//자릿수 받아서 말록 배열 설정 후 1000...으로 초기화
int			digit_search(int digit)
{
	char	*ret;
	int		i;

	ret = (char *)malloc(sizeof(char) * (digit + 1));
	if (!ret)
		return (0);
	ret[0] = '1'; //시작에만 '1'로 초기화
	i = 1;
	while (i < digit)
	{
		ret[i++] = '0'; //자릿수 표현 위해 '0'으로 초기화
	}
	ret[i] = 0;
	return (key_search(ret));
}

//문자열 받아서 digit에 해당하는 hash_table배열 찾아 value 출력
int			key_search(char *c)
{
	t_node	*r;
	int		digit;
	int		result;

	digit = find_digit(c);
	//자릿수가 37을 넘어갈 경우 37로 나눈 나머지 값으로 digit 설정
	if (digit > 37)
		digit = digit % 37;
	r = hash_table[digit]; //인덱스가 digit인 hash_table 배열의 시작 노드
	while (r)
	{
		// result는 매개변수c와 hash_table의 문자열 순서 비교
		result = ft_strcmp(c, r->key);
		if (result == 0)
			break ;
		r = r->next;
	}
	if (r == '\0')
	{
		return (0);
	}
	write(1, r->value, find_digit(r->value));
	write(1, "\n", 1);
	return (1);
}

int main()
{
	t_node a;
	t_node b;
	t_node c;
	t_node d;
	t_node e;

	a.key = "10";
	a.value = "ten";
	b.key = "1000000";
	b.value = "million";
	c.key = "1000000000000000000000";
	c.value = "sextillion";
	d.key = "1000000000000000000000000000000000";
	d.value = "decillion";
	e.key = "17";
	e.value = "seventeen";

	add(&a, 2);
	add(&b, 7);
	add(&c, 22);
	add(&d, 34);
	add(&e, 2);

	digit_search(22);
	digit_search(2);
	key_search("17");
	key_search("10");
	key_search("1000000");
}
