//accept string and display first and last character...

#include<stdio.h>
#include<string.h>
int main()
{
  char s1[50];
  int i;
  printf("enter string::");
  gets(s1);
  
  for(i=0;s1[i]!='\0';i++);
  
  printf("first character=%c",s1[0]);
  printf("\nlast character=%c",s1[i-1]);
}
