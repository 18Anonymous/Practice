#include<stdio.h>
int main() {
    int age;
    printf("enter a age\n");
    scanf("%d",&age);
    if(age>=18){
        printf("eligible to vote");
    } else {
        printf("not eligible for vote");
    }
}
    
