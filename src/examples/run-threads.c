#include <stdio.h>
#include <syscall.h>

int main(int argc, char const *argv[])
{
  printf("Hello!\n");
  struct threadToPrint threadinfo;
  getthreadinfo(3, &threadinfo);
  return 0;
}