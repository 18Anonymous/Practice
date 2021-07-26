#include<stdio.h>
int dsum(int *a, int *b){
    *a = *a + *a;
    *b = *b + *b; 
    printf("*a=%d... *b=%d\n",*a,*b);
    return *a + *b;
}
void main(){
    int n1 = 10;
    int n2 = 20;
    int (*f) (int * ,int *);
    f = &dsum;
    int sums = f(&n1,&n2);
    printf("sum=%d\n",sums);
    printf("n1=%d... n2=%d\n",n1,n2);


   
   
  

}