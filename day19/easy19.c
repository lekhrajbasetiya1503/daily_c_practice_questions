/*
problem name : 

write a program to campare to structure dates and print the result.
#include <stdio.h>
#include <string.h>

int main()
{
    typedef struct date
    {
        int day;
        int month;
        int year;
    } date;

    date a, b;
    a.day = 5;
    a.month = 12;
    a.year = 1999;

    b.day = 19;
    b.month = 12;
    b.year = 2023;

    if (a.day == b.day)
    {
        if (a.month == b.month)
        {
            if (a.year == b.year)
            {
                printf("the dates are equal\n");
            }
            else
            {
                printf("date are not equal\n");
            }
        }
        else
        {
            printf("date are not equal\n");
        }
    }
    else
    {
        printf("date are not equal\n");
    }
}
