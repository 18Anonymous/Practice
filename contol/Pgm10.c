#include<stdio.h>
int main() {
    int cls,stu;
    float per;
    printf("enter num of class conducted and class attended by stu\n");
    scanf("%d %d",&cls,&stu);
    per=(stu*1.0/cls)*100;
    printf("%f\n",per);
    if(per>=75) {
        printf("student allowed to sit in exam");
    }
    else {
         printf("student not allowed to sit in exam");
    }

}
    
