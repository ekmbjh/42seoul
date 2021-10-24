#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

void ERROR()
{
	char *str;

	str = "ERROR!";
	write(1, str, 6);
}

int main(int argc, char *argv[])
{
	char *str[2];
	long long text_size;

	if(argc != 2 && argc != 3)
	{
		ERROR();
		return (0);
	}
	text_size = size_file();
	if(argc == 2)
	{
		str[0] = argv[1];
		read_dict(str[0], text_size);
	}
	else if(argc == 3)
	{
		str[0] = argv[1];
		str[1] = argv[2];
		input_dict(str[0], str[1], text_size);
	}
}