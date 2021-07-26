#include<stdio.h>
int main(int argc, char *argv[]) {
    int n,temp,rem,arms=0,digit,pow,temp1;
    printf("enter the num\n");
    scanf("%d",&n);
    temp=n;
    temp1=n;
    while(n>0){
        n=n/10;
        digit++;
    }
   
    while(temp>0){
        rem=temp%10;
        pow=1;
        for(int i=1;i<=digit;i++){
            pow=pow*rem;  
        }
        printf("power =%d\n",pow);
        arms=arms+pow;
        printf("arms=%d\n",arms);
        temp/=10;
    }
    printf("arms =%d\n",arms);
    if(temp1==arms){
        printf("given num %d is armstrong num",temp1);
    }
    else{
        printf("given num %d is not a armstrong num",temp1);
        
    }      
}