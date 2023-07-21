

#include<stdio.h>
#include<string.h>
 int main()
 {
   char s[20];
   int i;
   printf("enter string::");
   gets(s);
   printf("output=");
   for(i=0;s[i]!='\0';i++)
   {
     if(i%2==0)
     printf("\nstring=%c",s[i]);
   }
 }
