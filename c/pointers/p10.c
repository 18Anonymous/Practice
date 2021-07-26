
#include <stdio.h>

void printArray(int *a, int size) {
    int *i;
    for ( i = a; i<a+size;i++) {
        printf("%d ", *i);
    }
    printf("\n");
}

void simpleSort(int *a, int size) {
    int *i;
    int *j;
    for ( i = a; i<a+size;i++) {
        int  *min_idx = i;
        for ( j = i+1; j < a+size;j++) {
            if (*j < *min_idx)
                min_idx = j;
        }
        int temp = *min_idx;
        *min_idx = *i;
        *i = temp;   
    }
}

int main() {
    int a[10] = {1,5,2,67,-9,38,376,8,3,456} ;
    printArray(a,10) ;
    simpleSort(a,10);
    printArray(a,10);
}
  
    
   
   
  

