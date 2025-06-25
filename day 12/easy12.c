/*
problem name : 

Write a Program to create a pyramid pattern using C

*/

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

void minmax(int arr[],int size)
{
    int min = arr[0];
    int max = arr[1];

    for(int i=0;i<size;i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
        else if(arr[i]>max)
        {
            max = arr[i];
        }
    }

    printf("min : %d\nmax : %d\n",min,max);

}

int main()
{
    int size=10;
    int *arr = malloc(size*sizeof(int));
    for(int i=0;i<10;i++)
    {
        int a;
        scanf("%d",&a);
        arr[i]=a;

    }
    minmax(arr,size);
}