//accept n nos in array and display maximum using pointer

#include<stdio.h>
int main()
{
   int *a[50],n,i,max;
   printf("enter limit::");
   scanf("%d",&n);
   printf("enter n nos::");
   for(i=0;i<n;i++)
   scanf("%d",a+i);
   
   max=*(a+0);
   for(i=0;i<n;i++)
   {
      if(*(a+i)>max)
      max=*(a+i);
   }
   printf("maximum number from array=%d",max);
}
