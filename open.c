#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main(void) {
  char *fname = "ssu_test.txt";
  int fd;

  if((fd = open(fname,O_RDONLY)) < 0) {
    fprintf(stderr, "openerrorfor%s\n", fname);
    exit(1);
  } else
    printf("Success!\nFilename :%s\nDescriptor :%d\n", fname, fd);

  exit(0);
}