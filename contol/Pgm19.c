#include<stdio.h>
int main() {
    int roll,s1,s2,s3,total;
    float per,div;
    char name[10];
    printf("enter rollnum,name, 3 sub marks\n");
    scanf("%d %s %d %d %d",&roll,&name,&s1,&s2,&s3);
    total=s1+s2+s3;
    per=total*0.333;
    div=total*1.0/300;
    printf("total=%d percentage=%f division= %f",total,per,div);
    
}
    

    
