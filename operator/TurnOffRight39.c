
  //39.	Turn off the right most bit of an integer i  (hint : n & n-1 … n = 4 is 1000 and n-1 = 0111)

#include<stdio.h>
#include<stdlib.h>
int main(int argc,char* argv[]) {  
    int a;
    printf("enter a numbers");
    scanf("%d ",&a);
    printf("%d",a&(a-1));
   
}


