/*
problem name : 

Write a Program to print ascii value of character

*/

#include<stdio.h>
#include<stdbool.h>


int ascii(char c)
{
    return c;

}


int main()
{
    char c;
    printf("entet the character which ascii value you want  : ");
    scanf("%c",&c);
    printf("ascii value of character %c is %d\n",c,ascii(c));

}