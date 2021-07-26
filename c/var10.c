/*#include<stdio.h>
#include<stdbool.h>


int main(int argc,char *argv[])
{
    //char ch;
    //ch=argv[1];
    printf("value is %c, size is %d\n",argv[1],sizeof(char));

   // bool b;
   // b=aiot(argv[2]);
    printf("value is %d, size is %d\n",argv[2],sizeof(bool));
     
   // char name[128];
    //name[128]=argv[3];
    printf("value is %s, size is %d\n",argv[3],sizeof(argv));

}*/
d
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


int main(int argc, char *argv[]) {
    char a  ;
    char str[100]  ;
    bool b ;
    a = argv[1][0];
    strcpy(str,argv[2]);
    b = atoi(argv[3]);    
    printf("value is %c and size is %lu , addr is %p\n", a, sizeof(char), &a);
    printf("value is %s and size is %lu , addr is %p\n", str, sizeof(str), &str);
    printf("value is %u and size is %lu , addr is %p\n", b, sizeof(bool), &b);
}