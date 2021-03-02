#include <stdio.h>
#include <unistd.h>

int	main (void)
{
	void *vp;
	char str[] = "Hello word";

	vp = str;
	
	int li = (int)vp;

	printf("%d", li);
}
