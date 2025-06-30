/*
problem name : 

write a program to find 2 pair of elements that;s are equal to given number.
*/

#include<stdio.h>

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int target = 12;
    int count = 0;

    for(int i=0;i<10;i++)
    {
        for(int j=1+i;j<10;j++)
        {
            if(arr[i]+arr[j]==target)
            {
                printf("(%d,%d)\n",arr[i],arr[j]);
                count++;

            }
        }
    }
    printf("count : %d\n",count);
}
