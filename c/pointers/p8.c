#include<stdio.h>
int swap(int *a, int *b){
    int p=*b;
    *b = *a;
    *a = p;
    
}
void main() {
    int a=10;
    int b=20;
    int (*f) (int * ,int *);
    f=&swap;
    f(&a,&b);
    printf("a= %d\n",a);
    printf("b =%d\n",b);
}



   
   
  

