#include<stdio.h>
int main() {
   int id;
   int unit;
   float charge;
   char name[10];
   float total;
   printf("The enter customer id ,unit,name\n");
   scanf("%d %d %s",&id,&unit,&name);
   if(unit>0 && unit<=199)
   {
       total=unit*1.20;
      // printf(" 1 total=%f\n",total);
     } else if(unit>=200 && unit<400){
       total=unit*1.50; 
       //printf("2 total=%f\n",total);  
   } else if(unit>=400 && unit<600){
      total=unit*1.80;
      //printf("3 total=%f\n",total);
   } else {
     total=unit*2.00;
     //printf(" 4 total=%f\n",total);
   }
   if(total>400) {
     total=total*0.15+total;
     printf("%f\n",total);

  } else if(total<100){
     total=100;
     printf("%f\n",total);
   } else{
     printf("%f\n",total);
   }
  }

    

    
