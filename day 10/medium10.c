/*
problem name : 

Write a C program to calculate the factorial of a given number using recursion.

*/

#include<stdio.h>

int factorial(int num)
{
    if(num==1)
    {
        return num;
    }
    else{
        return num*factorial(num-1);
    }

}

int main()
{
    int num;
    printf("enter the number which factorial you want : ");
    scanf("%d",&num);
    printf("%d\n",factorial(num));
}