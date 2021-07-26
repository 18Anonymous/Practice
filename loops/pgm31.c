#include<stdio.h>
int main(int argc, char *argv[]) {

  int n,temp,rem,arms=0,digit,pow,temp1,x;
  printf("enter the num\n");
  scanf("%d",&n);
  x=n;
  for(int i=0;i<=x;i++) {
      //printf("i=%d\n",i);
    temp=i;
    temp1=i;
    n=i;
    digit=0;
    while(n>0){
      n=n/10;
      digit++;
    }
     // printf("digit=%d temp=%d\n",digit,temp);
    arms=0;
    while(temp>0){
      rem=temp%10;
      pow=1;
      for(int i=1;i<=digit;i++){
        pow=pow*rem;  
      }
      //printf("pow=%d\n",pow);
      arms=arms+pow;
      //printf("arms=%d\n",arms);
      temp/=10;
    }
    if(temp1==arms){
      printf("%d\n",temp1);
    }    
  }    
}