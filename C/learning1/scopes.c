#include <stdio.h>
int j;//file scope of j begins
void f(int i);
int  main(void){
    f(2);
}
void f(int i){//block scope of i begins
    int j = 1;//block scope of j begins
    i++;//i refers to a function parameter
    for(int i = 0;i < 2; i++){//block scope of loop local i begins
        int j = 2; //block scope of inner j begins, hides outer j
        printf("%d\n", j);
    }
    void g(int j);//j has a function prototype scope; hides file scope j

}