#include<stdio.h>
int fun(int a,int b){
    printf("a+b=%d",a+b);
}
void main(){
    int a=5;
    int b=10;
    int (*f)(int ,int);
    f=&fun;
    f(a,b);
    //fun(a,b);
}