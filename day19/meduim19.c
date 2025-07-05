/*
problem name : 

Write a Program to create a array structure that's contains the cricketer's information like name,age,number of matches and average record and print out the data.

#include<stdio.h>
#include<string.h>

int main()
{
    struct cricket{
        char name[20];
        int age;
        int noofmatches;
        float average;
    };

    struct cricket cricketer[3];
    
    for(int i=0;i<3;i++)
    {
        printf("enter the name of cricketer : ");
        scanf(" %[^\n]s",cricketer[i].name);
        printf("enter the age of cricketer : ");
        scanf("%d",&cricketer[i].age);
        printf("enter the name of cricketer : ");
        scanf("%f",&cricketer[i].average);
        printf("enter the name of cricketer : ");
        scanf("%d",&cricketer[i].noofmatches);
    }

    for(int i=0;i<3;i++)
    {
        printf("name : %s\n",cricketer[i].name);
        printf("age : %d\n",cricketer[i].age);
        printf("average : %f\n",cricketer[i].average);
        printf("number of matches : %d\n",cricketer[i].noofmatches);

        printf("\n");
    }
}
