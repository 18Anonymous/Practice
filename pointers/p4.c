#include<stdio.h>
int max(int *a, int *b){
    if(*a > *b){
        return *a;
    }
    return *b;
}
void main() {
    int n1 = 10;
    int n2 = 20;
    int (*f) (int * ,int *);
    f = &max;
    int maxn = f(&n1,&n2);
    printf("%d\n",maxn);
}



   
   
  

 