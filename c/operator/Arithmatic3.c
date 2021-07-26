#include<stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
    int a = 10;
    int b = 2;
    int c; 
    c = a+b;
    printf("a+b=%d\n",c);
    c = a-b;
    printf("a-b=%d\n",c);
    c = a*b;
    printf("a*b=%d\n",c);
    c = a/b;
    printf("a/b=%d\n",c);
    c = a%b;
    printf("a%%b=%d\n",c);
}