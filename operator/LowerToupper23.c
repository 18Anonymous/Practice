
//23.	Accept character and  print upper case and vice versa

#include<stdio.h>
int main(int argc,char* argv[]){
    
    char ch;
    printf("enter a lower case letter in alphabet");
    scanf("%c",&ch);
    printf("upper case=%c",ch-32); 
}