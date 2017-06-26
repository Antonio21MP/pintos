#include <stdio.h>
#include <syscall.h>

int
main(void)
{

  int pid[5];

  semainst(2);
  semainit(0,5);
  semainit(1,0);

  pid[0] = exec("writer 1");
  pid[1] = exec("reader 2");
  pid[2] = exec("reader 3");
  pid[3] = exec("reader 4");
  pid[4] = exec("reader 5");

  wait(pid[0]);
  wait(pid[1]);
  wait(pid[2]);
  wait(pid[3]);
  wait(pid[4]);

  return 0;
}