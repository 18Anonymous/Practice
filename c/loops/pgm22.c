#include<stdio.h>
int main(int argc, char *argv[]) {
    int n;
    printf("enter the num\n");
    scanf("%d ",&n);
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            printf("%d\n",i);
        }
     
    }    
}