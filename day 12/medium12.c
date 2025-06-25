/*
problem name : 

Write a C program to print to remove duplicate in array.

*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main() {
    int input[] = {2,3,5,1,2,1,3,8,1,5};
    // expected output[] = [2,3,5,1,8]
    int output[10];

    int size,count = 0;
    size = sizeof(input)/sizeof(int);
    
    for(int i = 0;i< size;i++)
    {
        bool result = false;
        for (int j=0;j <5;j++)
        {
            if(input[i] == output[j])
            {
                result = true;
                break;
            }
        }

        if(!result)
        {
            output[count] = input[i];
            count++;  
        }
        
    }
    
    for(int i=0;i<5;i++)
    {
        printf("%d ",output[i]);
    
    }
}
