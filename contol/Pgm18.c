#include<stdio.h>
#include<math.h>
int main() {
    float a,b,c,d;
    float exp,r1,r2;
    printf("enter a b c\n");
    scanf("%f%f%f",&a,&b,&c);
    exp=b*b-4*a*c;
    d=2*a;
    if(exp>0) {
        r1=-b+sqrt(exp)/d;
        r1=-b-sqrt(exp)/d;
        printf("r1=%f,r2==%f",r1,r2);
    } else {
        r1=-b/d;
        r2=-b/d;
        printf("r1==r2==%f",r1);
    }   
}
    

    
