#include<stdio.h>
int main(){
  int a=0,b=1,c;
  printf("before test\n",a,b);
  for(int i=0; i<=5; i++){
    
    a=b;
    b=c;
    c=a+b;
    printf("%d\n",c);
  }
}