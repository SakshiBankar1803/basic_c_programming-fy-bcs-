#include<stdio.h>

 int area(float r)
 {
   float a;
   a=3.14*r*r;
   return a;
 }
 
 int main()
 {
   float a,r;
   printf("enter radius::");
   scanf("%f",&r);
   a=area(r);
   printf("area of circle=%f",a);
 }

