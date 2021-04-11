#include <stdio.h>
#include <stdlib.h>
int main(void){
    if(printf("%s\n","hello, world!") < 0)//returns number chars if successful, -ve if enc or output error
     return EXIT_FAILURE;

    //EXIT_SUCCESS == 0
    puts("line 3");
    printf("EXIT_SUCCESS : %d, EXIT_FAILURE : %d \n", EXIT_SUCCESS, EXIT_FAILURE);
    return EXIT_SUCCESS;
}
