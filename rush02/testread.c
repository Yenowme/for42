#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_read(fd)
{
	char buf;
	int rt;
	char *p;
	char *key;
	int	i;

	i = 0;
	rt = read(fd, &buf, 1);
	p = &buf;
	//key 받기
	if ('0' <= p[i] && p[i] <= '9')
	{
		//while ('0' <= p[i] && p[i] <='9')
		//{
		//	i++;
		//	//read(fd, &buf, 1);
		//}
		key = (char*)malloc(2 + 1);
		strncpy(key, p, 2);
		key[2] = '\0';
	}
	printf("%s\n", key);
	printf("%c\n", buf);
	/*
	while (buf != '\n' && rt != 0)
	{
		write(1, &buf, 1);
		//value 받기
		rt = read(fd, &buf, 1); 
	}
	*/
	return (rt);
}
int main()
{
	int fd;
	char buf;

	char *p;

	fd = open("numbers.dict", O_RDONLY);

	printf("%d\n", fd);
	int t = 1;
	while (t != 0)
	{
		t = ft_read(fd);
		write(1, "\n", 1);
		t = 0 ;
	}
}


