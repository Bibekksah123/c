#include<stdio.h>
int main(){
  int lcm,hcf,a,b,rem,ab;
  printf("enter the value of a,b:");
  scanf("%d%d",&a,&b);
  ab=a*b;
  do{
    rem=a%b;
    if(rem==0){
      hcf=b;
    }else{
      a=b;
      b=rem;
    }

  }while (rem !=0);
  lcm=ab/hcf;
  printf("%d\n%d\n",lcm,hcf);
  return 0;
  
}