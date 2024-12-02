#include<stdio.h>
int main(){
  int power=0, remender, decimal=0,binary;
  printf("Enter a binary number: ");
  scanf("%d",&binary);
  while(binary !=0){
    remender=binary%10;
    decimal +=remender*pow(2,power);
    binary=binary/10;
    power++;
  }
  printf("Decimal equivalent is: %d",decimal);
}