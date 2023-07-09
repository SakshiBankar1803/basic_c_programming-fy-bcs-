//accept n numbers in array and display reverse

#include<stdio.h>
int main()
{
   int i,n,a[40];
   printf("enter limit::");
   scanf("%d",&n);
   printf("enter n numbers::");
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   
   printf("reverse numbers=");
   for(i=n-1;i>=0;i--)
   printf("%d\t",a[i]);
}
