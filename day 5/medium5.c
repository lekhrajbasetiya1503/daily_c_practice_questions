/*
problem name : 

how to check if number is prime 

*/

#include<stdio.h>
#include<stdbool.h>

int main()
{
    
    int num;
    bool result=true;
    printf("enter the number to check prime or not : ");
    scanf("%d",&num);
    
    if(num<=1)
    {
        result = false;
    }

    else
    {

        for(int i=2;i<num;i++)
        {
            if(num%i==0)
            {
                result = false;
                break;
            }
        }
    }

    if(result == true)
       printf("prime\n");
    else
       printf("not prime\n");
}