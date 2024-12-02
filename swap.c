#include<stdio.h>
void swap(int *a ,int *b );
int main(){
  int a=10, b=20;
   printf("value before swapping is %d %d\n",a,b);
   swap(&a,&b);
   printf("value after swapping is %d %d\n",a,b);
return 0;
} 
void swap(int *a,int *b){
  int temp=*a;
  *a=*b;
  *b=temp;
  printf("a=%d b=%d\n",a,b);
}