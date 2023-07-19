//accept string and display vowels of it....

#include<stdio.h>
#include<string.h>
int main()
{
  char s[30];
  int i;
  printf("enter string::");
  gets(s);
  
  printf("vowels in string=\n");
  for(i=0;s[i]!='\0';i++)
  {
    if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
    printf("%c\n",s[i]);
  }
}
