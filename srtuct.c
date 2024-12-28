#include<stdio.h>
struct student
{
  char name;
  int age
}s[2];

int main(){
  printf("enter the detail of the stident name  and age:");
  for(int i=1; i<=2; i++){
    printf("enter the name and age of the student:");
    scanf("%s%d",&s[i].name,&s[i].age);
  }

  for (int i = 1; i <=2; i++)
  {
  printf("name=%s,age=%d",s[i].name,s[i].age);
  }
  return 0;

}