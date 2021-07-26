#include<stdio.h>
int main() {
    int num;
    printf("enter a day num\n");
    scanf("%d",&num);
    switch(num) {
        case 0:printf("SUNDAY");
                 break;
        case 1:printf("MONDAY");
                 break;
        case 2:printf("TUESDAY");
                 break;
        case 3:printf("WENDSDAY");
                 break;
        case 4:printf("THURSDAY");
                 break;
        case 5:printf("FRIDAY");
                 break;
        case 6:printf("SATURDAY");
                 break;
        default:printf("invalid day num");
                 break;
    }

}
    

    
