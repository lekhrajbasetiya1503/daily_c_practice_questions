/*
problem name : 

Write a Program to find count of n number which is greater then x in array
*/

#include<stdio.h>

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int x=4;
    int count=0;
    for(int i=0;i<10;i++)
    {
        if(arr[i]>x){
            count+=1;
        }
    }

    printf("%d ",count);

}