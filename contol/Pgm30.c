#include<stdio.h>
int main() {
    char ch;
    int a,b;
    printf("enter a + or - or * or /\n");
    scanf("%cs",&ch);
    printf("enter 2 num\n");
    scanf("%d%d",&a,&b);
    switch(ch) {
        case '+':printf("ADD=%d",a+b);
                 break;
        case '-':printf("SUB=%d",a-b);
                 break;
        case '*':printf("MUL=%d",a*b);
                 break;
        case '/':printf("DIV=%d",a/b);
                 break;
        default:printf("invalid data");
                 break;
    }

}
    

    
