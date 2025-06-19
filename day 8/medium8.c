/*
problem name : 

Write a Program to Check if a number is an Armstrong number or not.

*/

#include<stdio.h>

int count(int num)
{
    int countt=0;
    while (num!=0)
    {
        countt++;
        num/=10;
    }

    return countt;
    
}

int binarytodecimal(int num)
{
    int count12 = count(num);
    int num1 = num;
    int sum = 0;
    int rem;
    while(num!=0)
    {
        int power = 1;
        rem = num%10;
        for(int i=0;i<count12;i++)
        {
            power*=rem;
        }

        sum+=power;
        num /=10;
    }

    if(num1 == sum)
    {
        printf("true\n");
    }
    else{
        printf("false\n");
    }
}

int main(){
    
    int num;
    printf("enter the binary number which you want to change in decimal : ");
    scanf("%d",&num);
    binarytodecimal(num);

}
