#include <stdio.h>
#include <syscall.h>

int main(int argc, char const *argv[])
{
  printf("Hello!\n");
  threadinfo(1);
  return 0;
}