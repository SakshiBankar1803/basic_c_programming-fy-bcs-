//accept n nos and display array in reverse order using pointer..

#include<stdio.h>
int main()
{
  int *a[40],n,i;
  printf("enter limit::");
  scanf("%d",&n);
  printf("enter n nos::");
  for(i=0;i<n;i++)
  scanf("%d",a+i);
  
  printf("reverse order array=::");
  for(i=n-1;i>=0;i--)
  printf("%d\t",*(a+i));
}
