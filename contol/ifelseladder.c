#include<stdio.h>
int main(){
    int score=85;
    if( score<=55){
        printf("failing");
    }
    else {
        if(score<=65){
            printf("unsatisfactory"); 
        }
        else{
            printf("satisfactory"); 
        }

    }
    
}