#include <stdio.h>
#include <syscall.h>

int main(int argc, char const *argv[])
{
  printf("Hello!\n");
  struct threadToPrint threadinfo;
  // getthreadinfo(3, &threadinfo);
  // printf("----THIS IS THE RETURN VALUES----\nTID: %d\nPriority = %d\nRun Count = %d\nWait Count = %d\n", threadinfo.tid, threadinfo.priority, threadinfo.run_count, threadinfo.wait_count);

  pid_t pid_bubblesort = exec("bubsort");
  getthreadinfo(pid_bubblesort, &threadinfo);
  printf("----THIS IS THE RETURN VALUES----\nTID: %d\nPriority = %d\nRun Count = %d\nWait Count = %d\n", threadinfo.tid, threadinfo.priority, threadinfo.run_count, threadinfo.wait_count);
  wait(pid_bubblesort);

  return 0;
}