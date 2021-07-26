#include<stdio.h>
int main(int argc, char *argv[]) {
    int n,base ,power=1;
    printf("enter base and the poewernum\n");
    scanf("%d %d",&base,&n);
    for(int i=1;i<=n;i++){
        power*=base;
     
    }
    printf("power =%d",power);

     
}