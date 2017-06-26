#include <stdio.h>
#include <syscall.h>

int
main(void)
{

  int array[8];

  semainst(2);
  semainit(0,9);
  semainit(1,0);

  array[0] = exec("consumer 1");
  array[1] = exec("consumer 2");
  array[2] = exec("producer 3");
  array[3] = exec("producer 4");
  array[4] = exec("consumer 5");
  array[5] = exec("consumer 6");
  array[6] = exec("producer 7");
  array[7] = exec("producer 8");

  wait(array[0]);
  wait(array[1]);
  wait(array[2]);
  wait(array[3]);
  wait(array[4]);
  wait(array[5]);
  wait(array[6]);
  wait(array[7]);

  return 0;
}