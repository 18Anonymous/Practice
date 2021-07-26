#include<stdio.h>
int main(int argc,char* argv[]){
    char a,b;
    printf("enter two char saparated by spaces");
    scanf("%c %c",&a,&b);
    printf("%c = %d\n",a,a);
    printf("%c = %d\n",b,b);
    printf("%c + %c=%d\n",a,b,a+b);
    printf("%c + %c=%c\n",a,b,a+b);
     printf("%c + %c=%c",a,b,a-b);
}