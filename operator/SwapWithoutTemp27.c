
/*24.	Accept name and age and show in one print statement
 a.	Accept from console
b.	Accept from command line
*/

#include<stdio.h>
#include<stdlib.h>
int main(int argc,char* argv[]){  
    int a,b,temp;
    printf("enter 2 numbers");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d b=%d",a,b);
    
    
}