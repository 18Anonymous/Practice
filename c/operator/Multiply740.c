//40.	Multiply a give number by 7 using bitwise operator (hint 7x = 8x - x) 

#include<stdio.h>
#include<stdlib.h>
int main(int argc,char* argv[]) {  
    int a,mul;
    printf("enter a numbers");
    scanf("%d ",&a);
    mul=(a<<3)-a;
    printf("%d",mul);
   
}


