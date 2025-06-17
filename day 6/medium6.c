/*
problem name : 

how to check if number is palindrome or not 

*/

#include<stdio.h>
#include<stdbool.h>

bool palindrome(int num)
{
    int reverse = 0;
    int num1  = num;
    int r;
    while(num!=0)
    {
        r = num%10;
        num = num/10;
        reverse=reverse*10+r;
    }

    bool result=true;

    if(reverse!=num1){
        result = false;
    }

    return result;

}

int main()
{
    int x;
    printf("enter the number which you want to check palindrome number : ");
    scanf("%d",&x);
    bool result = palindrome(x);
    if(result == true)
    {
        printf("the %d number is  a palindrome\n",x);

    }
    else{
        printf("the %d number is not a palindrome\n",x);

    }
}