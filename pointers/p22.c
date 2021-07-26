#include<stdio.h>
int sum(int a, int b){
    return a + b;
}
void main(){
    int n1=10;
    int n2=50;
    int (*f) (int  ,int );
    f=&sum;
    int sums=f(n1,n2);
    printf("sum=%d\n",sums);

}