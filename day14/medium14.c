/*
problem name : 

Write a C program to find duplicate values in array.

*/

#include<stdio.h>

int main()
{
    int arr[7] = {1,6,5,4,5,6,7};

    for(int i=0;i<7;i++)
    {
        for(int j=i+1;j<7;j++)
        {
            if(arr[i] == arr[j])
            {
                printf("%d is the duplicate element\n",arr[i]);
            }
        }
    }
}
