/*
problem name : 

Write a Program to print string as a pointers.
*/

#include<stdio.h>
#include<string.h>

int main()
{
    char str[] =  "ajay basetiya is best";
    char *ptr = str;
    while(*ptr != '\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
    printf("\n");
}
