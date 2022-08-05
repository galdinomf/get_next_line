#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "get_next_line_bonus.h"
#include <stdlib.h>
#include <string.h>

int	main()
{
	int fd;
	char *s;
	
	printf("FOPEN_MAX = %d\n", FOPEN_MAX);
	fd = open("test", O_RDONLY);
/*	printf("%s", get_next_line(fd));
	printf("fim da primeira chamada\n");
	printf("%s", get_next_line(fd));
	printf("fim da segunda chamada\n");
	printf("%s", get_next_line(fd));
	printf("fim da terceira chamada\n");

	//printf("sizeof(char *) = %ld\n", sizeof(char *));
	*/
	//fd =  2147483648;
	//int i;
	s = get_next_line(fd);
	//printf("%s\n", s);
	//printf("%s", get_next_line(fd));
	//s = get_next_line(fd);
	//printf(s);
	while (s)
	{
		//i = strcmp(s, "01234567890123456789012345678901234567890");
		printf("GNL return: %s", s);
		//printf("i = %d\n", i);
		free(s);
		s = get_next_line(fd);
	}

	// bytes_read = read(fd, buf, BUFFER_SIZE);
	// if (bytes_read > 0)
	// 	printf("buf = %s", buf);
	// bytes_read = read(fd, buf, BUFFER_SIZE);
	// if (bytes_read > 0)
	// 	printf("buf = %s", buf);
	//printf("BUFFER_SIZE = %d", BUFFER_SIZE);
	return (0);
}
