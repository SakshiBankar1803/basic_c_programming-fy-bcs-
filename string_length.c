//accept string and display length of string.using logic...

#include<stdio.h>
#include<string.h>
 int main()
 {
   char s[20];
   int i,c=0;
   printf("enter string::");
   gets(s);
   for(i=0;s[i]!='\0';i++)
   {
     c++;
   }
   printf("string length=%d",c);
 }
