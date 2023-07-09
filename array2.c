//accept n nos in array and display minimum number from them

#include<stdio.h>
int main()
{
   int a[40],n,i,min;
   printf("enter limit::");
   scanf("%d",&n);
   printf("enter n nos::");
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   
   min=a[0];
   for(i=0;i<n;i++)
   {
      if(a[i]<min)
      {
        min=a[i];
      }
   }
   printf("minimum number from array=%d",min);
}
