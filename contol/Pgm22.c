#include<stdio.h>
int main() {
  int a,b,c;
  printf("enter the angles\n");
  scanf("%d%d%d",&a,&b,&c);
  if(a+b+c==180) {
      printf("Triangle can be formed");
  } 
  else {
      printf("Triangle can not be formed");
  }
}
    

    
