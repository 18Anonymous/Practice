#include<stdio.h>
int main(int argc, char *argv[]) {
    int n,product=1,digit;
    printf("enter the num\n");
    scanf("%d",&n);
    
    while(n>0){
      digit=n%10;
      n=n/10;
      if(digit==0){
          continue;
      }
      product*=digit;
    }
    printf("product=%d",product);     
}