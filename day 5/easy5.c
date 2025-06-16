/*
problem name:-

How do you swap two integers without using a temporary variable?
*/



#include<stdio.h>

int main()
{
  int a,b;
  printf("enter the value of A : ");
  scanf("%d",&a);
  printf("enter the value of B : ");
  scanf("%d",&b);
  a=a+b;
  b=a-b;
  a=a-b;

  printf("value of A : %d\nvalue of B : %d\n",a,b);
  

}