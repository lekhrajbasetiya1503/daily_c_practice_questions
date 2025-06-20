/*
problem name : 

Write a Program to reverse a number.

*/

#include<stdio.h>
#include<stdbool.h>


int count(int num)
{
    int counta=0;
    while(num!=0)
    {
        counta+=1;
        num/=10;
    }
    return counta;

}


int main()
{
    int num;
    printf("entet the number which digit count you want : ");
    scanf("%d",&num);
    printf("count of number is : %d\n",count(num));

}