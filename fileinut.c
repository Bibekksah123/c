#include<stdio.h>
int main(){
   FILE  *fp;
   char s[10];
   fp=fopen("inut.txt","w");
   printf("enter the address of usrs");
   scanf("%s",s);
   fprintf(fp,s);
   return 0;
}