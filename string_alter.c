#include<stdio.h>
#include<string.h>
 int main()
 {
   char s[30];
   int i;
   printf("enter string:");
   gets(s);
   printf("output=\n");
   for(i=0;s[i]!='\0';i++)
   {
     if(isupper(s[i])
      printf("tolower(s[i]));
      else if(islower(s[i]))
       printf("toupper(s([i]));
       else if(isdigit(s[i]))
        printf("?");
        else if(s[i]==' ')
         printf("*");
         else
         printf("%c",s[i]);
   }
   
 }
