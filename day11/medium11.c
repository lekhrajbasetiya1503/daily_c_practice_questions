/*
problem name : 

Write a C program to print fibonacci series.

*/

#include<stdio.h>

int fibonacci(int num)
{
    int a=0;
    int b=1;

    for(int i=0;i<=num;i++)
    {
        if(i==1)
        {
            printf("%d ",a);
        }
        else if(i==2)
        {
            printf("%d ",b);
        }
        else if(i>2)
        {
            int c;
            c = a+b;
            printf("%d ",c);
            a=b;
            b=c;
        }
    }
}

int main()
{
    int num;
    printf("enter the number which time fibonacci series you want : ");
    scanf("%d",&num);
    fibonacci(num);
}