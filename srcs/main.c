#include "get_next_line.h"

int main()
{

	int fd1 = open("file" , O_RDWR | O_CREAT);
	printf("%s", get_next_line(fd1));
}
