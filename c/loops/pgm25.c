#include<stdio.h>
int main(int argc, char *argv[]) {
    int n1,n2,lcm=1,num,n,m;
    printf("enter the 2 num\n");
    scanf("%d %d",&n1,&n2);
    num=2;
    n=n1;
    m=n2;
    while(n1>1 || n2>1){
    //while(n1>1 && n2>1){
        printf("%d\n",num);
        if(n1%num==0 && n2%num==0){
            n1=n1/num;
            n2=n2/num;
            lcm*=num;
        }
        else if(n2%num==0){
            n2=n2/num;
            lcm*=num;
           
        }
        else if(n1%num==0){
            n1=n1/num;
            lcm*=num;
           
        } 
       else{
           num++;
       }
     //  printf("n1=%d n2=%d\n",n1,n2);
      // printf("num=%d\n",num);
    }
    printf("lcm of %d  and %d= %d\n",n,m,lcm);  
}

    /*for(int i=2;i<=num/2;i++){
        if(q1!=1 && q2!=1) {
          if((n1%i==0 || n2%i==0)){
           q1=n1/i;
           q2=n1/i;
           lcm=lcm*i;
           printf("%d\n",i);
          }
        }
        else{
            break;
        }
        //printf("%d %d\n",q1,q2);
    } */ 
   
