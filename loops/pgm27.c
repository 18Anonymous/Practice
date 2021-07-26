#include<stdio.h>
int main(int argc, char *argv[]) {
    int n,prime;
    printf("enter the num\n");
    scanf("%d",&n);
    int i=2;
    while(i<=n){
    //for(int i=1;i<=n;i++){
        prime=1;
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
             //printf("%d\n",i);
             prime=0;
             break; 
            }
        }
        //printf("prime=%d\n",prime);
        if(prime==1){ 
            printf("%d\n",i);
        }
        i++;
         
        
    }
    
 
}