#include<stdio.h>
#include<stdlib.h>
int main(int argc,char* argv[]){
    float length;
    float breadth;
    float area;
    printf("enter a length  and breadth in feet");
    scanf("%f %f",&length,&breadth);
    area = (length * breadth)/3.2803;
    printf("area in meter=%f",area);

     
}