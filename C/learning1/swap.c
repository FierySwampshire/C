#include <stdio.h>

void swap_val(int, int);//definition
void swap_ref(int*, int*);//definition
int main(void){
    int a = 21;
    int b = 27;
    printf("original : a = %d, b = %d\n", a,b);
    swap_val(a, b);
    printf("original : a = %d, b = %d\n", a,b);
    swap_ref(&a, &b);
    printf("swapped : a = %d, b = %d\n", a,b);
    return 0;
}
void swap_val(int a, int b){//call by value
    int temp = a;
    a = b;
    b = temp;
    printf("swap_val: a = %d, b = %d\n", a, b);
}
void swap_ref(int *a, int *b){//call by reference
    int temp = *a;
    *a = *b;
    *b = temp;
     printf("swap_ref: a = %d, b = %d\n", *a, *b);
}