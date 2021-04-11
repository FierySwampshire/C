#include <stdio.h>
void increment(void);
int identity(int a);
int main(void){
    increment();
    increment();
    increment();
    return 0;

}
void increment(void){
    static unsigned int counter = 0;//only initializes once, functiuon scope
    counter++;
    printf("%d ", counter);
}
int *func(int i) {
  const int j = i; // ok
//   static int k = j; // error : initializer element is not constant
  static int k = 0;
  k = j;
  return &k;
}
int identity(int a){
    return a;
}