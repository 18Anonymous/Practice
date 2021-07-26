#include<stdio.h>
#include<memory.h>
void main() {
    int *a;
    int *b;
    printf("a=%x\n",a);
    printf("b=%x\n",b);
    *a = 10;
    *b = 20;
   

    int c = *a + *b;
    printf("a=%d\n",*a);
    printf("b=%x\n",*b);
    printf("%d\n",c);
  


    //fun(a,b);
}