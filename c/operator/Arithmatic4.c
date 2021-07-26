#include<stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
    int a = 10;
    float b = 2.7;
    int c; 
    float d;
    c = a+b;
    d = a+b;
    printf("a+b=%d  %f\n",c,d);
    c = a-b;
    d = a-b;
    printf("a-b=%d  %f\n",c,d);
    c = a*b;
    d = a*b;
    printf("a*b=%d  %f\n",c,d);
    c = a/b;
    d = a/b;
    printf("a/b=%d  %f\n",c,d);
  /*  c = a%b;
    d = a%b;
    printf("a%%b=%d  %f\n",c,d);*/
}