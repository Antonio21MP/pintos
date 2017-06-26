#include <stdio.h>
#include <syscall.h>



int 
main(int argc, char* argv[])
{
    printf("%s\n", argv[1]);

    int i = 0;
    while(i < 1000)
    {
       semadown(1);
       printf("Produciendo [%s]\n", argv[1]);
       semaup(0);
       i++;
    }

    return 0;
}