#include<stdio.h>
int main(int argc, char *argv[]) {
    int n,sum=0;
    printf("enter the num\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            sum+=i;
            
        }
    }
    printf("%d\n",sum); 

     
}