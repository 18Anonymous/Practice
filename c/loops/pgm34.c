#include<stdio.h>
int main(int argc, char *argv[]) {
    int n,temp,rem,arms,sum=0,fact;
    printf("enter the num\n");
    scanf("%d",&n);
    temp=n;
    while(n>0){
          rem=n%10;
          arms=arms+rem*rem*rem;
          n=n/10;
          fact=1;
          for(int j=1;j<=rem;j++){
              fact=fact*j;
          } 
          printf("%d\n",fact);
          sum=sum+fact;
          printf("%d\n",sum);     
    }
    if(temp==sum){
        printf("given num is Strong number\n");

    }
}
