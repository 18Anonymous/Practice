#include<stdio.h>
int main(int argc, char *argv[]) {
    int n,i,count=0,last_digit=-1,digit;
    printf("enter the num\n");
    scanf("%d",&n);
    
    while(n>0){
      digit=n%10;
      if(last_digit==-1){
           last_digit=digit;     
      }
       n=n/10;  
    }
    printf("sum=%d",last_digit+digit);     
}