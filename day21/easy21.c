/*
problem statement : 
Write a C program to modify an array of 8 integers such that each element is updated based on its index position. For elements at even indices, add 10 to the value; for elements at odd indices, multiply the value by 2. Finally, display the modified array elements in a single line, separated by spaces.
*/
#include<stdio.h>

int main()
{
    int arr[8]={1,2,3,4,5,6,7,8};
    for(int i=0;i<8;i++)
    {
        if(i%2==0)
        {
            arr[i] = arr[i]+10;
        }
        else{
            arr[i] = arr[i]*2;
        }
    }

    for(int i=0;i<8;i++)
    {
        printf("%d ",arr[i]);
    }
}
