#include<stdio.h>
int main(){
    int quant,sum;
    int total;
    printf("enter Quantity\n");
    scanf("%d",&quant);
    sum=quant*100;
    if(sum>=1000){
        total=sum*0.9;
        printf("total cost=%d",total);
    }
    else{
        printf("total cost=%d",sum);
    }
    
}
    
