#include<stdio.h>
void main() {
    int *p;
    int a=6;
    p=&a;
    //(*p)++;
    printf("%d\n",(*p)++);
    printf("%d\n",(*p));
    printf("%p\n",p);
    *p++;
    printf("%p\n",p);
}