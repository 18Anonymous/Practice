#include <stdio.h> 
#include <stdlib.h>
void main() {
    int i,*ptr;
    ptr = (int *)malloc (5 * sizeof(int));
    if(ptr == NULL) {
        printf("memory not available\n");
        exit(1);

    }
    printf ("enter 5 integers:");
    for (int i = 0 ;i < 4; i++) {
        scanf("%d",ptr+i);
    }
    ptr = (int *) realloc (ptr, 9*sizeof(int));
    if ( ptr == NULL) {
        printf("memory not available\n");
        exit(1);
    }
    printf("enter 4 more integer");
    for (int i = 4 ;i < 9; i++) {
        scanf("%d",ptr+i);
    }
    for (int i = 0 ;i < 9; i++) {
        printf("%d",*ptr+i);
    }


}