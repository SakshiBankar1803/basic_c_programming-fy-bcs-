#include<stdio.h>
int main()
{
  char s[20];
  int i;
  printf("enter string::");
  gets(s);
  printf("lowercase output::\n");
  for(i=0;s[i]!='\0';i++)
  {
    printf("%c",s[i]+32);
  }
}
