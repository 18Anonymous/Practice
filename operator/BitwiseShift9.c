#include<stdio.h>
int main(int argc ,char *argv[])
{
    int a,b;
    printf("enter 2 integer values");
    scanf("%d %d\n",&a,&b);
    printf("a=%d\n",a);
    printf("a=%d\n",a<<1);
    printf("a=%d\n",a<<b);
    printf("a=%d\n",a>>b);
    printf("a=%d b=%d\n",a,b);
    printf("a&b=%d\n",a&b);
    printf("a=%d\n",!a);
    printf("a||b=%d\n",a||b);
}


