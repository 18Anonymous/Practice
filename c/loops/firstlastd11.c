#include<stdio.h>
int main(int argc, char *argv[]) {
    int n,i,count=0,lastdigit=-1,digit;
    printf("enter the num\n");
    scanf("%d",&n);
    
    while(n>0){
      digit=n%10;
      if(lastdigit==-1){
           lastdigit=digit;
      }
       n=n/10;   
    }
    printf("first digit %d\n",digit);
    printf("last digit=%d",lastdigit);

     
}