/*
problem name : 

Write a Program swape two values using pass by refferenc.

*/

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;

}

int main()
{
    int a,b;
    printf("etner the value of a : ");
    scanf("%d",&a);
    printf("etner the value of b : ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("a : %d\nb : %d\n",a,b);
}