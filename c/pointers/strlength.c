#include <stdio.h>
int strlen(char *p){
    int len=0;
    while(*(p+len) !='\0'){
        len++;
    }
    return len;
}
void main() {
    int n;
    char *p;
    char *i;
    char str[100];
    printf("enter the string\n");
    scanf("%s",str);
    int (*f)(char *);
    f=&strlen;
    int len = f(&str); 
    printf("the length of the string is = %d",len);
}



   
   
  

