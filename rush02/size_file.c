#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>


long long int size_file(void)
{
	long long int size;
	char buff[100];
	int fd;
	long long int cnt;

	size = 0;
	if(0 < (fd = open("dict.txt", O_RDONLY)))
	{
		while (0 < (cnt = read(fd, buff, 100)))
		{
			size += cnt;
		}
		return (size);
	}
	else
		return (-1);
}

int main(void)
{
	printf("%lld",size_file());
}