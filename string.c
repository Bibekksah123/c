#include<stdio.h>
int main(){
  char s[20]="nepal";
  for(int i=0; s[i] !='\0'; i++){
    for(int j=0; j<=i; j++){
      printf("%C",s[j]);
    }
    printf("\n");
  }
  return 0;

}