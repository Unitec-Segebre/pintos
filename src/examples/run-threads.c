#include <stdio.h>
#include <syscall.h>

int main(int argc, char const *argv[])
{
  printf("Hello!\n");
  struct threadToPrint;
  getthreadinfo(1);
  return 0;
}