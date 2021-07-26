#include <stdio.h>
int main() {
    int *p1;
    char *p2;
    double *p3;
    int a=0;
    printf("adress of a:%x   and value of a is :%d\n",&a,a);
    printf("adress of p1:%x   and value of p1 is :%x \n",&p1,p1);
    printf("adress of p2:%x   and value of p2 is :%x\n",&p2,p2);
    printf("adress of p3:%x   and value of p3 is :%x\n",&p3,p3);
    a++;
    p1=p1+2;
    p2=p2+3;
    p3++;
    printf("adress of a:%x   and value of a is :%d\n",&a,a);
    printf("adress of p1:%x   and value of p1 is :%x \n",&p1,p1);
    printf("adress of p2:%x   and value of p2 is :%x\n",&p2,p2);
    printf("adress of p3:%x   and value of p3 is :%x\n",&p3,p3);
    return 1;
}