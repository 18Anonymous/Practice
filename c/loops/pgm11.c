#include<stdio.h>
int main(int argc, char *argv[]) {
    int n,sum=0,temp,j;
    printf("enter the num\n");
    scanf("%d",&n);
    temp=n;
    j=1;
    while(j<=n){
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            sum+=i;
        }   
    } 
    if(n==sum) {
        printf("%d is perfect number",n);
    }
    else {
        printf("%d is not  perfect number",n);
    }
       
}