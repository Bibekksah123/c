#include<stdio.h>
int main(){
  int binnary, decimal=0, power=0,digit;
  printf("enter binnary number");
  scanf("%d", &binnary);
  while(binnary !=0){
    digit=binnary%10;
    decimal=decimal + (digit * pow(2,power));
    binnary /=10;
    power++;
  }
  printf("the decimal number is %d",decimal);
  return 0;
}