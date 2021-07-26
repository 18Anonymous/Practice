#include<stdio.h>
int main(int argc,char* argv[]){
    char a,b,c;
    printf("enter 3 num s saparated by spavcess");
    scanf("%c %c %c",&a,&b,&c);
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