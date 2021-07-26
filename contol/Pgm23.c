#include<stdio.h>
int main() {
  char c;
  printf("enter the char\n");
  scanf("%c",&c);
  if((c>='A' && c<='Z') || (c>='a' && c<='z') ) {
      printf("The entered value is alphabet");
  } else if(c>='0' && c<='9') {
      printf("The entered value is digit");
  } else {
      printf("The entered value special char");
  }
}
    

    
