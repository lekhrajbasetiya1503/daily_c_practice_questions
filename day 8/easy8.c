/*
problem name : 

Write a Program to check if the year is a leap year or not.

*/

#include<stdio.h>
#include<stdbool.h>

bool leapyearornot(int year)
{
    if((year%400==0) || (year%4==0 && year%100!=0))
    {
        printf("%d is leap year",year);
    }
    else{
        printf("%d is not leap year",year);
    }
}

int main()
{
    int year;
    printf("entet the year which you want to check leap year or not : ");
    scanf("%d",&year);
    leapyearornot(year);

}
