
/*24.	Accept name and age and show in one print statement
 a.	Accept from console
b.	Accept from command line
*/

#include<stdio.h>
#include<stdlib.h>
int main(int argc,char* argv[]) {  
    int a,b,sub;
    printf("enter 2 numbers");
    scanf("%d %d",&a,&b);
    sub=a+(~b+1);
    printf("sub=%d",sub);
}


