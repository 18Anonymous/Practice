#include<stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
    int a = 10;
    int b = 2;
    a += b;
    printf("a+b=%d\n",a);
    a -= b;
    printf("a-b=%d\n",a);
    a *= b;
    printf("a*b=%d\n",a);
    a /= b;
    printf("a/b=%d\n",a);
    a %= b;
    printf("a%%b=%d\n",a);
}