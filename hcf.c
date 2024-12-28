#include<stdio.h>
int main(){
  int lcm,hcf,a,b,rem;
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    do{
      rem=a%b;
      if(rem==0){
        hcf=b;
      }else{
        a=b;
        b=rem;
      }
      lcm=a;

    }while(rem !=0);
    
    printf("%d%d",hcf,lcm);
    return 0;
    
}