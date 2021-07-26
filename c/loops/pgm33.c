#include<stdio.h>
int main(int argc, char *argv[]) {
    int n,sum=0;
    printf("enter the num\n");
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        sum=0;
        for(int j=1;j<=i/2;j++){
            if(i%j==0){
                sum+=j;
            }     
        }   
        if(i==sum) {
            printf("%d\n",i);
        }
        
    }     
}