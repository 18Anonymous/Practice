#include<stdio.h>
int main() {
    int x,y;
    printf("enter x and y\n");
    scanf("%d%d",&x,&y);
    if(x>0 && y>0)  {
        printf("1st Quadrant");
    }
    else if(x<0 && y>0){
         printf("2nd Quadrant");
    }
    else if(x<0 && y<0){
         printf("3rdQuadrant");
    } 
    else {
         printf("4thQuadrant");
    }
}
    

    
