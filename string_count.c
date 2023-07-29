//accept string and count number of uppercase character lowercase character digit and symbol

#include<stdio.h>
#include<string.h>
#include<ctype.h>
 int main()
 {
   char s[20];
   int i,c1=0,c2=0,c3=0,c4=0;
   printf("enter string::");
   gets(s);
   printf("output=\n");
   for(i=0;s[i]!='\0';i++)
   {
     if(isupper(s[i]))
      c1++;
      else if(islower(s[i]))
      c2++;
      else if(isdigit(s[i]))
      c3++;
      else
      c4++;
   }
   printf("\nuppercase count=%d",c1);
   printf("\nlowercase count=%d",c2);
   printf("\ndigits count=%d",c3);
   printf("\nsymbol count=%d",c4);
 }
