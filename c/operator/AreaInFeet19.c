#include<stdio.h>
#include<stdlib.h>
int main(int argc,char* argv[]){
    float length;
    float breadth;
    float area;
    printf("enter a length  and breadth in meter");
    scanf("%f %f",&length,&breadth);
    area = (length * breadth)*3.2803;
    printf("area in feet=%f",area);

     
}