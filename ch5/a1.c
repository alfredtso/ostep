#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

int main(int argc, char* argv[]) {
  int x;
  x = 100;
  printf("hello world\n", (int) getpid());
  int rc = fork();
  if (rc < 0) {
      fprintf(stderr, "fork failed\n");
      exit(1);
  } else if (rc == 0) {
    printf("hello, I am child (pid:%d)\n", (int) getpid());
    printf("x: %d\n", x);
    x += 1;
    printf("x: %d\n", x);
  } else {
    int rc_wait = wait(NULL);
    printf("parent: x: %d\n", x);
    x += 1;
    printf("parent: x: %d\n", x);
  }
  return 0;
}

