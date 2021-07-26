#include<stdio.h>
int main() {
    int height;
    printf("enter a  height in meter\n");
    scanf("%d",&height);
    if(height>0 && height<100){
        printf("person is dwarf");
    }
    else if(height>=101 && height<=150) {
        
        printf("person is short");
    }
    else if(height>=151 && height<=165) {
          printf("person is medium");
    }
    else {
        printf("person Tall");

    }
}
    
