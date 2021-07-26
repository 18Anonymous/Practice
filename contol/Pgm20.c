#include<stdio.h>
int main() {
    int temp;
    printf("enter temp value\n");
    scanf("%d",&temp);
    if(temp<0) {
        printf("Freezing weather");
    }
    else if(temp>0 && temp<=10) {
         printf("Very cold weather");
    }
    else if(temp>10 && temp<=20) {
         printf("cold weather");
    }
    else if(temp>20 && temp<=30) {
         printf("normal weather");
    }
    else if(temp>30 && temp<=40) {
         printf("Hot weather");
    }
    else {
        printf("Very hot");
    }
    
}
    

    
