#include <fcntl.h>
#include "hash.h"

int	white_space(char c)
{
	return ((c >= 9 && c <= 13) || c == ' ');
}
//
/*int	m_set(int fd, char **key)
{
	char buf;
	int n_size;

	n_size = 0;
	read (fd, buf, 1);
	while (buf == ':')
	{
		read (++fd, buf, 1);
		n_size++;
	}
	*key = malloc(sizeof(n_size + 1))
}

//노드 하나 구성
t_node	*make_node(fd, &rt)
{
	int fd;
	char buf;
	t_node *n;
	int i;

	i = 0;
	if (!(n = new_node()))
		retunr (0); //노드 셋팅 실패시 
	while(buf != '\n' && rt != 0)
	{
		rt = read(fd, &buf, 1); //buf에 파일값 저장
		m_set(fd, &n->key); //n->key배열할당
		n->key[++i] = buf; //buf
		if(white_space(buf));
			continue;
	}
	return (n)
}
*/
//숫자, 스페이스 체
char is_key(fd)
{
	char buf;

	read(fd, &buf, 1);
	if (('0' <= buf && buf <= '9'))
		return (buf);
	return (0);
}
char is_value(fd)
{
	char buf;

	read(fd, &buf, 1);
	if (('a' <= buf && buf <= 'z'))
		return (buf);
	return (0);
}

//사전 유효성 세부검사
int dict_valid_sub(fd)
{
	char buf;
	int read_rt;

	read_rt = 1;

	while(!is_white_space(buf))
	{
		if (!(buf = is_key(fd)))
			return (0);
	}
	while( buf == ':' )
	{
		if (!(buf = is_key(fd)))
			return (0);
	}
	while( buf >= 'a' && buf 
	{
		if (!(buf = is_vlaue(fd)))
			return (0);
	}
	while( buf == ':' )
	{
		if (!(buf = is_key(fd)))
			return (0);
	}
	}
//사전 유효성 검사 cont
int dict_valid(char *dict)
{
	int fd;
	int read_rt;
	char buf;
	int cnt_n;

	cnt_n = 0;
	fd = open(dict, O_RDONLY);
	read_rt = read(fd, &buf, 1);
	while(rear_rt = 1) 
	{
		//숫자 검사
		//space 
		// : 검사
		// space 
		// 영어 검사
		// 개행검사
		if(!(read_rt= dict_valid_sub(fd)))
			return (0);
		cnt_n++;	
		read_rt = read(fd, &buf, 1);
	}
	return (cnt_n);
}

int main()
{
	char *dict;
	int cnt_n;

	dict = "numbers.dict";
	if(!(cnt_n == dict_valid))
	{
		write(1, "Dict Error\n",11); 
	}
	else
		printf("%d", cnt_n);
}
