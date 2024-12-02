#include<Stdio.h>
int main(){
  FILE *f;
  f=fopen("u.txt","w");
  fprintf(f,"welcome to college");
  return 0;
}