#include <stdio.h>
#include <syscall.h>

int
main(void)
{

  int pid[8];

  semainst(2);
  semainit(0,9);
  semainit(1,0);

  pid[0] = exec("consumer 1");
  pid[1] = exec("consumer 2");
  pid[2] = exec("producer 3");
  pid[3] = exec("producer 4");
  pid[4] = exec("consumer 5");
  pid[5] = exec("consumer 6");
  pid[6] = exec("producer 7");
  pid[7] = exec("producer 8");

  wait(pid[0]);
  wait(pid[1]);
  wait(pid[2]);
  wait(pid[3]);
  wait(pid[4]);
  wait(pid[5]);
  wait(pid[6]);
  wait(pid[7]);

  return 0;
}