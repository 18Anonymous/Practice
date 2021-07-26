#include<stdio.h>
int main() {
    int sal,service,bonus;
    printf("enter employee salary and service\n");
    scanf("%d %d",&sal,&service);
    if(service>5) {
        bonus=sal*0.05;
        printf("net bonus  %d",sal+bonus);
    } else {
        printf("net bonus %d",sal);
    }
}
    
