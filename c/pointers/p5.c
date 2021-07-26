#include <stdio.h>
#include <stdlib.h>
void printArray (char *p,int size) {
    char *i;
    printf("array elements are\n");
    for(i = p ; i<(p+size) ;i++) {
        printf("%c\n",*i);
    }
}
void main() {
    int n;
    char *p;
    char *i;
    printf("enter the element number\n");
    scanf("%d",&n);
    p = (char *)calloc(n,sizeof(char));
    for( i = p ; i<p+n ; i++){
        scanf("%c",i);
        scanf("%c",i);
    }
    printArray(p,n);
}



   
   
  

