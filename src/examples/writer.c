#include <stdio.h>
#include <syscall.h>



int 
main(int argc, char* argv[])
{
    printf("%s\n", argv[1]);

    int i = 0;
    int j = 0;
    while(i < 1000)
    {
        semadown(1);
        while(j < 10){
        printf("Escritor %s esta escribiendo \n", argv[1]);
        j++;
        }
        j=0;
        printf("Escritor %s dejo de escribir \n", argv[1]);
        semaup(0);
       i++;
    }

    return 0;
}