#include "get_next_line.h"
#include <stdio.h>
int   main(int ac, char **av)
{
  char  *line;
  int   fd1;
  int   fd2;

  fd1 = open(av[1], O_RDONLY);
	get_next_line(fd1, &line);
	printf("line : %s\n", line);
	get_next_line(fd1, &line);
	printf("line : %s\n", line);
 // while(get_next_line(fd1, &line) != 0)
 /* get_next_line(fd1, &line);
  printf("%s\n", line);
  get_next_line(fd1, &line);
  printf("%s\n", line);
  get_next_line(fd1, &line);
  printf("%s\n", line);
  get_next_line(fd1, &line);
  printf("%s\n", line);
  get_next_line(fd1, &line);
  printf("%s\n", line);
  get_next_line(fd1, &line);
  printf("%s\n", line);
  get_next_line(fd1, &line);
  printf("%s\n", line);
  get_next_line(fd1, &line);
  printf("%s\n", line);
  get_next_line(fd1, &line);
  printf("%s\n", line);
  get_next_line(fd1, &line);
  printf("%s\n", line);
  get_next_line(fd1, &line);
  printf("%s\n", line);
  get_next_line(fd1, &line);
  printf("%s\n", line);
  get_next_line(fd1, &line);
  printf("%s\n", line);
  get_next_line(fd1, &line);
  printf("%s\n", line);
  get_next_line(fd1, &line);
  printf("%s\n", line);
  get_next_line(fd1, &line);
  printf("%s\n", line);
  get_next_line(fd1, &line);
  printf("%s\n", line);
  get_next_line(fd1, &line);
  printf("%s\n", line);
  get_next_line(fd1, &line);
  printf("%s\n", line);
  get_next_line(fd1, &line);
  printf("%s\n", line);
  get_next_line(fd1, &line);
  printf("%s\n", line);
  get_next_line(fd1, &line);
  printf("%s\n", line);
  get_next_line(fd1, &line);
  printf("%s\n", line);
  get_next_line(fd1, &line);
  printf("%s\n", line);
  get_next_line(fd1, &line);
  printf("%s\n", line);
  get_next_line(fd1, &line);
  printf("%s\n", line);
  get_next_line(fd1, &line);
  printf("%s\n", line);
  get_next_line(fd1, &line);
  printf("%s\n", line);
  get_next_line(fd1, &line);
  printf("%s\n", line);
  get_next_line(fd1, &line);
  printf("%s\n", line);
  get_next_line(fd1, &line);
  printf("%s\n", line);
  get_next_line(fd1, &line);
  printf("%s\n", line);
  get_next_line(fd1, &line);
  printf("%s\n", line);
  get_next_line(fd1, &line);
  printf("%s\n", line);
  get_next_line(fd1, &line);
  printf("%s\n", line);
  get_next_line(fd1, &line);
  printf("%s\n", line);
  get_next_line(fd1, &line);
  printf("%s\n", line);
  get_next_line(fd1, &line);
  printf("%s\n", line);
  get_next_line(fd1, &line);
  printf("%s\n", line);
  get_next_line(fd1, &line);
  printf("%s\n", line);
  get_next_line(fd1, &line);
  printf("%s\n", line);
  get_next_line(fd1, &line);
  printf("%s\n", line);
  get_next_line(fd1, &line);
  printf("%s\n", line);
  get_next_line(fd1, &line);
  printf("%s\n", line);
  get_next_line(fd1, &line);
  printf("%s\n", line);
  get_next_line(fd1, &line);
  printf("%s\n", line);
*/
 close(fd1);
 return (0);
}