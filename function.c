#include<stdio.h>
void add(int,int);
int main(){
  int a=3,b=4;
  add(a,b);
}
void add(int a,int b){
int sum=a+b;
  printf("%d",sum);
}
