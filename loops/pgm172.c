#include<stdio.h>
int main(int argc, char *argv[]) {
    int n,res=0,digit,temp,maxmul=0,d;
    printf("enter the num\n");
    scanf("%d",&n);
    temp=n;
    while(n>0){
        n=n/10;
        digit++;
        if(maxmul==0){
            maxmul=1;
        }
        else{
            maxmul=10*maxmul;
        }
    }
    for(int i=1;i<=digit;i++){
        d=temp%10;
        temp=temp/10;
        res=res+d*maxmul;
        maxmul=maxmul/10;
        //printf("maxmul=%d",maxmul);    
    }
    printf("rev=%d",res);
}

