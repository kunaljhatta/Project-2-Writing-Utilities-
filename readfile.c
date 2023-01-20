#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char* argv []){

  if (argc != 2){
     perror("Error: use second commandline argument as filename");
  }
  
  int fd = open(argv[1], O_RDONLY);
  char fileContents[2048];
  size_t count = read(fd, fileContents, 2048);
  write(1, fileContents, count);
  close(fd);
}