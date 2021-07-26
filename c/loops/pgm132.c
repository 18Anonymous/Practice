#include<stdio.h>
int main(int argc, char *argv[]) {
    int n,res=0,mul=1,digit,numbs,i,maxmul=0,k;
    printf("enter the 2 num\n");
    scanf("%d",&n);
    i=n;
    while(i>0){
        i=i/10;
        digit++;
        if(maxmul==0){
            maxmul=1;
        }
        else{
            maxmul=10*maxmul;
        }
    }
    for(int i=1;i<=digit;i++){
           numbs=n%10;
           n=n/10;
           printf("%d\n",numbs);
           if(i==1){
            res=res+numbs*maxmul;
            printf("res1=%d\n",res);
           }
           else if(i==digit){
               res=res+numbs;
               printf("res2=%d\n",res);
           }
           else{
               res=res+numbs*mul;
                printf("res3=%d\n",res);
           }
           mul=mul*10;  
    }
    printf("after swapping =%d",res);

}

