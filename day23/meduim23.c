/*
problem statement : 
write a program to find hcf of two numbers.
*/

#include<stdio.h>

int min(int a,int b){
    if(a<b) return a;
    else return b;
}

int hcf(int a,int b)
{
    int max;
    for(int i=min(a,b);i>=1;i--)
    {
        if(a%i==0 && b%i==0)
        {
            max = i;
            break;
        }
    }
    return max;

}

int main()
{
    int a,b;
    printf("enter the value of a : ");
    scanf("%d",&a);
    printf("enter the value of b : ");
    scanf("%d",&b);

    printf("the hcf of %d and %d is : %d\n",a,b,hcf(a,b));


}
