#include<stdio.h>
struct emplyee
  {
    char name[30];
    int age;
    int id;
    float salary;
  }s;
int main(){
printf("enter the name of empoyee");
scanf("%s",&s.name);
printf("the name of one employee is %s",s.name);
return 0;
  
}