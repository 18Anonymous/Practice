#include<stdio.h>
int main() {
    char option;
    printf("enter a option\n");
    scanf("%c",&option);
    switch(option) {
        case 'E':printf("Excellent");
                 break;
        case 'V':printf("Very Good");
                 break;
        case 'G':printf("good");
                 break;
        case 'A':printf("Average");
                 break;
        case 'F':printf("Fail");
                 break;
        default:printf("invalid option");
                 break;
    }

}
    

    
