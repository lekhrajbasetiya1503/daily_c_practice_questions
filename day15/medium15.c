/*
problem name : 

combination and permutation
*/

#include<stdio.h>

int factorial(int num)
{
    if(num == 1)
    {
        return 1;
    }

    int fact=1;
    while(num!=0)
    {
        fact *= num;
        num --;
    
    }
    return fact;
}

int main()
{
    int n,r;
    printf("enter the value of n : ");
    scanf("%d",&n);
    printf("enter the value of r : ");
    scanf("%d",&r);
    float resultn = factorial(n);
    float resultr = factorial(r);
    float resultnr = factorial(n-r);
    float result = resultn/(resultr*resultnr);

    printf("the combination and permutation of %d and %d : %0.2f\n",n,r,result);

    return 0;
}
