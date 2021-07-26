#include <stdio.h>

void main() {
   int a;
   int b;
   int *p1 = &a;
   int *p2 = &b;
   *p1=10;
   *p2=20;
   printf("address of p1=%p ....address of p2=%p\n",&p1,&p2);

   printf("value of p1=%p   and address of a=%p\n",p1,&a);
   printf("value of p1=%p   and address of b=%p\n",p2,&b);
   //printf("value of p1=%p   and address of a=%p",p1,&a);
   printf("sum=%d\n",*p1+*p2);

}