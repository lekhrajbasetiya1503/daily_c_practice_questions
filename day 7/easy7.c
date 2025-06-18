/*
problem name : 

Write a Program to Replace all 0’s with 1’s in a Number 

*/

#include<stdio.h>

int replace0to1(int num)
{
    int result=0;
    int i=1;
    int rem;

    if(num==0)
    {
        return 1;
    }

    while(num!=0 )
    {
        rem = num%10;
        if(rem==0)
        {
            rem=1;
        }
        result += i*rem;
        i*=10;
        num = num/10;

    }

    return result;


}

int main()
{
    int num;
    printf("entet the number where you want to replace 0 to 1 : ");
    scanf("%d",&num);
    printf("%d\n",replace0to1(num));

}