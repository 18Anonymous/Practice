
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
    temp=a;
    a=b;
    b=temp;
    printf("a=%d b=%d",a,b);
    
    
}