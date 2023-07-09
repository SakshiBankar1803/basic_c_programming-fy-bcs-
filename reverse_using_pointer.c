// accept number and display reverse of it using pointer

#include<stdio.h>
int main()
{
  int n,*pn,d,r=0;
  printf("enter number::");
  scanf("%d",&n);
  pn=&n;
  while(*pn>0)
  {
     d=*pn%10;
     r=r*10+d;
     *pn=*pn/10;
  }
  printf("reverse number=%d",r);
}
