#include<stdio.h>
int main(int argc, char *argv[]) {
    int n,sum=0;
    printf("enter the value of n\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    printf("%d\n",sum);

     
}