#include<stdio.h>
int main(int argc, char *argv[]) {
    int n,rem,num=0;
    printf("enter the num\n");
    scanf("%d",&n);
    while( n !=0){
        num=(num*10)+(n%10);
        n=n/10;
    }
    while(num !=0){
      
      switch(num%10){
        case 0:printf("zero");
            break;
        case 1:printf("one");
            break;
        case 2:printf("two");
            break;
        case 3:printf("Three");
            break;
        case 4:printf("four");
            break;
        case 5:printf("five");
            break;
        case 6:printf("six");
            break;
        case 7:printf("seven");
            break;
        case 8:printf("eight");
            break;
        default:printf("nine");
      }

      
      num/=10;
    }
    
}











