#include<stdio.h>
#include<memory.h>
#include<stdlib.h>
//void printArray()
void main() {
    int n;
    char *p;
    int i;
    printf("enter the element number");
    scanf("%d",&n);
    p = (char *)calloc(n,sizeof(char));
    for( i=0;i<n;i++){
        scanf("%c",(p+i));
        scanf("%c",(p+i));
    }
    for(i=0;i<n;i++){
        printf("%c\n",*(p+i));
    }


}



   
   
  

