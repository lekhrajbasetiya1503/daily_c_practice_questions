/*
problem name:-

Write a C program to calculate Compound Interest.
*/



#include<stdio.h>
double compound_interest(double p,double r,double t){
  double amount,total_amount=1;

  for(int i=1;i<=t;i++)
  {
      amount = ((1+r/100));
      total_amount = total_amount*amount;
  }

  double ci=(p*total_amount)-p;
  return ci;
}

int main()
{
  double principle,rate,time;
  printf("enter the principle amount : ");
  scanf("%lf",&principle);
  printf("enter the rate: ");
  scanf("%lf",&rate);
  printf("enter the time in month : ");
  scanf("%lf",&time);

  double ci = compound_interest(principle,rate,time);
  printf("the compund interest : %lf\n",ci);

}