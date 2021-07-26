
/*24.	Accept name and age and show in one print statement
 a.	Accept from console
b.	Accept from command line
*/

#include<stdio.h>
#include<stdlib.h>
int main(int argc,char* argv[]) {  
    int a,b,c;
    printf("enter 3 numbers");
    scanf("%d %d %d",&a,&b,&c);
    printf("a-b-c=%d\n",(a-b-c));
    printf("a-(b-c)=%d\n",a-(b-c));
    printf("a*b-c=%d\n",(a*b-c));
    printf("a*(b-c)=%d\n",a*(b-c));
    printf("(a+b)*c=%d\n",(a+b)*c);
    printf("a/b*c=%d\n",a/b*c);
    printf("a*b/c=%d\n",a*b/c);
    printf("a+2*(b/c)=%d\n",a+2*(b/c));
    
   
}


