# get_next_line - 125% ✅
get_next_line function, written in C, receives a file descriptor and returns the first line of the file. And it will returns the next line in a next call of get_next_line in main function for example.

## Usage
Example:
```c
#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int main(void)
{
  int   fd;
  char  *line;
  
  fd = open("file.txt", O_RDONLY); // get file descriptor of "file.txt"
  line = get_next_line(fd);        // get_next_line receives file descriptor and returns the first line to variable line
  printf("%s", line);              // printing this line
  line = get_next_line(fd);        // this time returns the second line to variable line
  printf("%s", line);              // printing the second line
  free(line);
  return (0);
}
```
