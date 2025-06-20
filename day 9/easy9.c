/*
problem name : 

Write a Program to reverse a number.

*/

#include<stdio.h>
#include<stdbool.h>


int count(int num)
{
    int counta=0;
    while(num!=0)
    {
        counta+=1;
        num/=10;
    }
    return counta;

}

int reverse(int num)
{
    int reversea=0;
    int rem,i=1;
    int countt = count(num);

    while(num!=0)
    {
        rem = num%10;
        int power = 1;
        for(int j=1;j <=(countt-i);j++){
            power*=10;
        }
        reversea += rem*power;
        num/=10;
        i++;
    }
    return reversea;
}

int main()
{
    int num;
    printf("entet the number which reverse you want : ");
    scanf("%d",&num);
    printf("reverse number is : %d\n",reverse(num));

}