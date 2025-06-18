/*
problem name : 

Write a Program to convert the binary number into a decimal number.

*/

#include<stdio.h>

int binarytodecimal(int num)
{
   int sum = 0;
   int rem;
   int i=0;
   while(num!=0)
   {
    rem = num%10;
    int power = 1;
    for(int j=0;j<i;j++)
    {
        power*=2;

    }
    sum += rem*power;
    num/=10;
    i++;
    
   }  
   return sum;

}

int main(){
    
    int num;
    printf("enter the binary number which you want to change in decimal : ");
    scanf("%d",&num);
    printf("%d\n",binarytodecimal(num));

}
