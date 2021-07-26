#include<stdio.h>
int sum(int *a, int *b){
    return *a + *b;
}
int sub(int *a, int *b){
    return *a - *b;
}
void main(){
    int n1 = 10;
    int n2 = 50;
    char ch;
    int oper;
    int (*f) (int * ,int *);
    printf("enter A for addition S for subtraction\n");
    scanf("%c",&ch);
    if(ch == 'A'){
        f = &sum;
        oper = f(&n1,&n2);
    } else {
        f = &sub;
        oper = f(&n1 , &n2);
    }
    printf("sum=%d\n",oper);
}