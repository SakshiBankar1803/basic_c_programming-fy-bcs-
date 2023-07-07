#include<stdio.h>
#include<string.h>
int main()
{
  int i,j,f=0;
   char s1[100];
   printf("enter string::");
   gets(s1);
   for(j=0;s1[j]!='\0';j++);
   
   for(i=0,j=j-1;s1[i]!='\0';j--,i++)
   {
    if(s1[i]!=s1[j])
    {
      f=1;
      break;
    }
   }
   
   if(f==0)
   printf("string is palindrome");
   else
   printf("string is not palindrome");
   
}
