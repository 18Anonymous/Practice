#include<stdio.h>
int main(int argc,char* argv[]){
    int a,b,c;
    printf("enter 3 num s saparated by spavcess");
    scanf("%d %d %d",&a,&b,&c);
    printf("%d\n",(a>b && a>c));
    printf("%d\n",(a>b || a>c));
    printf("%d\n",(a>b && b>c));
    printf("%d\n",(a>b || b>c));
    printf("%d\n",(a<b && a<c));
    printf("%d\n",(a<b || a<c));
    printf("%d\n",(a<b && b<c));
    printf("%d\n",(a<b || b<c));
    printf("%d\n",(a==b && a<c));
    printf("%d\n",(a==b || a<c));
    printf("%d\n",(a==b && b>c));
    printf("%d\n",(a==b || b>c));
    printf("%d\n",(a==b || b==c));
    printf("%d\n",(a!=b && b==c));
    printf("%d\n",(a!=b && b!=c));
 
}