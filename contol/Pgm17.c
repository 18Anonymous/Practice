#include<stdio.h>
int main() {
    int p,c,m;
    printf("enter p c m marks\n");
    scanf("%d%d%d",&p,&c,&m);
    if((p>55 && c>55 && m>55)&& p+c+m>=175)  {
        printf("eligible for admission") ;  
    }
    else {
         printf("not eligible for admission");
    }
}
    

    
