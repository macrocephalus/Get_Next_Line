#include "libft/libft.h"
#include "get_next_line.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

int main (int argc, char ** argv)
{
	int fd;
	char *line;
	(void)argc;
	fd = 0;
	fd = open(argv[1], O_RDONLY);
	
	 while (get_next_line(fd, &line))
	 {
		printf("main:|%s|\n",line);
	 	ft_strdel(&line);
	 }
	close (fd);
	return (1);
}
