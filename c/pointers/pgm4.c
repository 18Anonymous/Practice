#include<stdio.h>
#include<memory.h>
void main(){
    int *pc;
    int *pm;
    int a;
    pc = (int *)calloc(1,sizeof(int));
    pm = (int *)malloc(sizeof(int));
    *pc = 10;
    *pm = 20;
    a = *pc + *pm;
    printf("address of pc:%x   value of pc=%x   content of pc:%d\n",&pc,pc,*pc);
    printf("address of pm:%x   value of pm=%x   content of pm:%d\n",&pm,pm,*pm);
    printf("address of a:%x   value of a:%d \n ",&a,a);


    //fun(a,b);
}