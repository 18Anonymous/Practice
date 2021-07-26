#include<stdio.h>
void main(){
    /*int *p;
    int x=9;
    p = &x;
    printf("%d\n",++*p);
    printf("%d\n",(*p)++);*/
    int x = 5;
    int *p = &x;
     printf("%x\n",&x);
    int *p1;
    p1 = &p;
    printf("%x %x",p1,p);
}