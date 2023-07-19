//accept string and display reverse order using logic

#include<stdio.h>
#include<string.h>
int main()
{
  char s[30];
  int i;
  printf("enter string::");
  gets(s);
  
  for(i=0;s[i]!='\0';i++);
  
  printf("reverse order string=");
  for(i=i-1;i>=0;i--)
   printf("%c",s[i]);
  
}
