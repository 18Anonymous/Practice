#include<stdio.h>
int main(int argc, char *argv[]) {
    int n,i,count=0;
    printf("enter the num\n");
    scanf("%d",&n);
    while(n>0){
       n=n/10;
       count++;
    }
    printf("%d",count);

     
}