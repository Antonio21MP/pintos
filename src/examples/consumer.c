
#include <stdio.h>
#include <syscall.h>


int 
main(int argc, char* argv[])
{
    printf("%s\n", argv[1]);
    int i = 0;
    while(i < 1000)
    {
       semadown(0);
       printf("Consumiendo: [%s]\n", argv[1]);
       semaup(1);
       i++;
    }
    return 0;
}