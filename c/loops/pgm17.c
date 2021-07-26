#include<stdio.h>
int main(int argc, char *argv[]) {
    int n,mul=1,digit,first_digit,rev,temp,num;
    printf("enter the num\n");
    scanf("%d",&n);
    rev=0;
    temp=n;
    num=n;
    while(n>10){
        n=n/10;
        mul=mul*10;
        printf("mul=%d\n",mul);
    }
    while(temp>0){
        digit=temp%10;
        rev=rev+mul*digit;
        mul=mul/10;
        temp=temp/10;
    }
    if(num==rev){
        printf("given number %d is palindrome",num);
    }
    else{
        printf("given number %d is not a palindrome",num);
    }
    
}


/* 
while(n>0){
  rem=n%10;
  rev=rev*10+rem;
  n=n/10;
}
*/


