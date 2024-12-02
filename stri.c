#include<stdio.h>
int main(){
  int i=0;
  int s[i];
  printf("etner the chareacter");
  scanf("%c",s);
  if(s[i]>='A' && s[i]<='Z'){
    s[i]=s[i]+32;
  }else{
  s[i]=s[i]-32;
  }
  printf("the converted chareacter is %c",s[i]);
  return 0;

}