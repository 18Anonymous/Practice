#include<stdio.h>
int globalint =100;
char globalChar='g';
int main(){
    int localint=10;
    long localLong=23456789;
    double localDouble=2.3;
    char localChar ='A';
    char localString[20]="learn";
    int a,b;
    //now lets print the address and the value ofeach variable
    printf("globalint adress is %p and value is %d,%d\n",&globalint,globalint,sizeof(int));
    printf("globachar adress is %p and value is %c,%d\n",&globalChar,globalChar,sizeof(char));
    printf("=== global variable over\n");
    printf("localhar adress is %p and value is %c,%d\n",&localChar,localChar,sizeof(char));
    printf("localdouble adress is %p and value is %Lf,%d\n",&localDouble,localDouble,sizeof(double));
    printf("localLong adress is %p and value is %lu,%d\n",&localLong,localLong,sizeof(long));
    printf("localint adress is %p and value is %d,%d\n",&localint,localint,sizeof(int));
    printf("localString adress is %p and value is %s,%d\n",&localString,localString,sizeof(localString));
    


}

