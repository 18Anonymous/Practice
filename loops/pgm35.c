#include<stdio.h>
int main(int argc, char *argv[]) {
    int n,temp,rem,arms,sum,fact,temp1;
    printf("enter the num\n");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        temp=i;
        temp1=i;
        sum=0;
        while(temp>0){
          rem=temp%10;
          arms=arms+rem*rem*rem;
          temp=temp/10;
          fact=1;
          for(int j=1;j<=rem;j++){
             fact=fact*j;
           } 
          printf("%d\n",fact);
          sum=sum+fact;
          printf("%d\n",sum);     
        }
        if(temp1==sum){
            printf("given num is Strong number\n");
        }
    }
}
