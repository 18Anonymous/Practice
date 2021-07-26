#include<stdio.h>
int main(int argc, char *argv[]) {
    int n,prime;
    prime=1;
    printf("enter the num\n");
    scanf("%d ",&n);
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            prime=0;
            break;  
        }
    }
    if(prime==1){
        printf("num=%d is prime number\n",n);

    }
    else{
             printf("num=%d is not a prime number\n",n);
    }
 
}