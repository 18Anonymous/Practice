#include<stdio.h>
int fact(int *a){
    int f = 1;
    for(int i=1;i<=*a;i++) {
        f *= i;
    }
    return f;
   
}
void main() {
    int a;
    printf("enter the num\n");
    scanf("%d",&a);
    int factorial = fact(&a);
    printf("factorial=%d",factorial);
}



   
   
  

