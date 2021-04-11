#include <stdio.h>
#include <stdlib.h>
int main(void){
    if(puts("hello, world!") == EOF)
     return EXIT_FAILURE;

    //EXIT_SUCCESS == 0
    puts("line    3");
    return EXIT_SUCCESS;
}
