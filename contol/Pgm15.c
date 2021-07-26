#include<stdio.h>
int main() {
    int a,b,c;
    printf("enter  3 num\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c) {
        printf("a is greatest=%d",a);
    } else if(b>c){
         printf("b is greatest=%d",b);
    } else {
         printf("c is greatest=%d",c);
    }
}
    

    
