#include<stdio.h>
int main(int argc, char *argv[]) {
    int n1,n2,fact=1,num,hcf;
    printf("enter the 2 num\n");
    scanf("%d %d",&n1,&n2);
    if(n1<n2){
        num=n1;
    }
    else{
        num=n2;
    }
    for(int i=1;i<=num/2;i++){
        if(n1%i==0 && n2%i==0){
            hcf=i;
        }
    }  
    printf("hcf of %d  and %d= %d",n1,n2,hcf);  
}