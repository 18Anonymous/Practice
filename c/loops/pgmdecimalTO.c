#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[]) {

    int octalNum[10];
    int index=0,n;
    printf("enter the num\n");
    scanf("%d",&n);
    while(n>0){
        octalNum[index++]=n%8;
        n=n/8;
    }
    for(int i=index-1;i>=0;i--){
        printf("%d",octalNum[i]);
    }
}