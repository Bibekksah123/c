#include<stdio.h>
int main(){
  int a[4]={0,1,3,4};
  int i;
  
  for(i=0; i<4; i++)
{
printf("%d",*(a+i));
}

}
