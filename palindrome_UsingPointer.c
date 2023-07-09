//accept number and check palindrome or not

#include<stdio.h>
int main()
{
  int n,*pn,d,r=0,n1;
  printf("enter number::");
  scanf("%d",&n);
  pn=&n;
  n1=*pn;
  while(*pn>0)
  {
    d=*pn%10;
    r=r*10+d;
    *pn=*pn/10; 
  }
  if(r==n1)
  printf("number is palindrome");
  else
  printf("number is not palindrome");
  
}
