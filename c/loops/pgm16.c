#include<stdio.h>
int main(int argc, char *argv[]) {
    int n,rev=0,digit,mul=1,num;
    printf("enter the num\n");
    scanf("%d",&n);
    num=n;
    while(n>10){
      digit=n%10;
      mul=mul*10;
      n=n/10;
    }
    printf("%d\n",mul);
    while(num>0){
      digit=num%10;
      printf("digit=%d\n",digit);
      rev=rev+mul*digit;
      mul=mul/10;
      printf("n=%d",num);
      num=num/10;
      printf("%d\n",num);
    }
    printf("reverse of a num=%d",rev);     
}