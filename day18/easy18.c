/*
problem name : 

Write a Program to declare multiple pointer in single line.
*/

#include<stdio.h>
#include<string.h>

typedef int* int_pointer;

int main()
{
    int x = 5,y = 6;
    int_pointer a = &x,b=&y;
    printf("%p\n",a);
    printf("%p\n",b);
}
