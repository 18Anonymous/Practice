#include<stdio.h>
int main(int argc, char *argv[]) {
    int n,sum=0,digit;
    printf("enter the num\n");
    scanf("%d",&n);
    
    while(n>0){
      digit=n%10;
      sum+=digit;
      n=n/10;
    }
    printf("sum=%d",sum);     
}