#include<stdio.h>
int main(int argc, char *argv[]) {
    int n,res=0,mul=1,digit,first_digit;
    printf("enter the 2 num\n");
    scanf("%d",&n);
    first_digit=-1;
    while(n>10){
        digit=n%10;
        if(first_digit==-1){
            first_digit=digit;
        }
        else{
            res=res+digit*mul;
        }
        mul=mul*10;
        n=n/10;
    }
    res=res+n;
    res=res+first_digit*mul;
    printf("after swapping=%d",res);
}

