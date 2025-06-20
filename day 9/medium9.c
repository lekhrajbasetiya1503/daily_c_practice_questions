/*
problem name : 

Write a C Program to check if two numbers are equal without using the comparison operator

*/

#include<stdio.h>

int isequal(int a,int b)
{
    if(!(a^b))
    {
        printf("%d is equal to %d\n",a,b);
    }
    else{
        printf("%d is not equal to %d\n",a,b);
    }

}

int main()
{
    int a,b;
    printf("enter the two numbers : ");
    scanf("%d%d",&a,&b);
    isequal(a,b);
}