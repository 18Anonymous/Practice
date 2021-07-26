#include <stdio.h>
int main() {
    int a=5;
    int *p;
    p=&a;
    printf("adress of main:%p\n",main);
    printf("adress of a:%p\n",&a);
    printf("adress of p:%p\n",&p);
    printf("value of p:%p\n",p);
    printf("value of p:%p\n",p);
    printf("value of a:%d\n",a);
    printf("value of content pointed by p:%d\n",*p);


 
}