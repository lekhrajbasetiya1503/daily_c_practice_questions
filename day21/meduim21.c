/*
problem statement : 
Write a C program to rotate the elements of an array of 7 integers to the left by k positions. The number of rotations (k) may be larger than the array size, so handle it using modulo operation. Perform the rotation using nested loops, swapping adjacent elements to achieve one position shift at a time. Finally, print the rotated array elements in a single line separated by spaces.
*/

#include <stdio.h>

void n_rotate(int arr[],int k)
{
    k = k % 7;
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }
    }
}

int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int k = 150;

    n_rotate(arr,k);

    for (int i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }
}
