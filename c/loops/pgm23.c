#include<stdio.h>
int main(int argc, char *argv[]) {
    int n,fact=1;
    printf("enter the num\n");
    scanf("%d ",&n);
    for(int i=1;i<=n;i++){
        fact*=i;
    }  
    printf("factorial of %d = %d",n,fact);  
}