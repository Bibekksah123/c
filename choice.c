#include<stdio.h>
int main(){
  int day;
  printf("choose the number ");
  scanf("%d",&day);
  switch (day)
  {
  case 1:
      printf("sunday");
    break;
  
  default:
  printf("monday");
    break;
  }
  return 0;
}