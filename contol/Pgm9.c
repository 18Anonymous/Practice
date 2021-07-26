#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter ages of 3 ppl\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c) {
        
        printf("a is oldest=%d\n",a);
    } else if(b>c) {
         printf("b is oldest=%d\n",b);
    } else {
         printf("c is oldest=%d\n",c);
    }



    
    if(a<b && a<c) {
        
     printf("a is yongestt=%d\n",a);
    } else if(b<c) {
         printf("b is youngest=%d\n",b);
    } else {
         printf("c is youngest=%d\n",c);
    }
}
    
