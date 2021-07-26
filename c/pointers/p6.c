
#include <stdlib.h>
int maxElement (char *p,int size) {
    char *i;
    int max=INT_MIN;
    for(i=p;i<(p+size);i++) {
        if(max < *i) {
            max = *i;
        }
    }
    return max;
}
void main() {
    int n;
    char *p;
    char *i;
    printf("enter the element number\n");
    scanf("%d",&n);
    p = (char *)calloc(n,sizeof(char));
    for( i=p ; i<p+n ;i++){
        scanf("%d",i);
        //scanf("%d",i);
    }
    int max = maxElement(p,n);
    printf("largest num = %d",max);


}



   
   
  

