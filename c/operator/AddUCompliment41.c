//41.	Add 1 to integer using complement operator (hint ~n = -n+1 so -~n is n+1)
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char* argv[]) {  
    int n,add;
    printf("enter a numbers");
    scanf("%d ",&n);
    add=-(~n);
    printf("%d",add);
   
}


