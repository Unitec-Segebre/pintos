#include <stdio.h>
#include <syscall.h>

#define PROGRAM_COUNT 1

enum programs{
  bubsort
};

int main(int argc, char const *argv[])
{
  printf("Hello!\n");
  struct threadToPrint threadinfo[PROGRAM_COUNT];
  // getthreadinfo(3, &threadinfo);
  // printf("----THIS IS THE RETURN VALUES----\nTID: %d\nPriority = %d\nRun Count = %d\nWait Count = %d\n", threadinfo.tid, threadinfo.priority, threadinfo.run_count, threadinfo.wait_count);

  pid_t pid_bubblesort = exec("bubsort");
  int isDone[PROGRAM_COUNT];

  printf("----THIS IS THE RETURN VALUES----\n");
  while(!isDone[bubsort]){
    if(!isDone[bubsort])
      isDone[bubsort] = getthreadinfo(pid_bubblesort, &threadinfo[bubsort]);
    printf("TID: %d, Priority = %d, Run Count = %d, Wait Count = %d\n", threadinfo[bubsort].tid, threadinfo[bubsort].priority, threadinfo[bubsort].run_count, threadinfo[bubsort].wait_count);
  }
  wait(pid_bubblesort);

  return 0;
}