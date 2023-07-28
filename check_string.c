//accept string if it upper then display lower and vice versa and other character display as it is....

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
  char s[50];
  int i;
  printf("enter string::");
  gets(s);
  printf("output:\n");
  for(i=0;s[i]!='\0';i++)
  {
    if(isupper(s[i]))
    printf("%c",tolower(s[i]));
    else if(islower(s[i]))
    printf("%c",toupper(s[i]));
    else
    printf("%c",s[i]);
  }
}
