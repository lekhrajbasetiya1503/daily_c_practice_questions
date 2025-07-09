/*
problem statement : 
Write a C program to print the piramide
      * 
     * * 
    * * * 
   * * * * 
  * * * * * 
 * * * * * * 
 until n values.
 */

#include<stdio.h>

int main()
{
    int x;
    printf("enter the number which hight piramide you want : ");
    scanf("%d",&x);

    for(int i=0;i<x;i++)
    {
        for(int j=0;j<x-i;j++)
        {
            printf(" ");
            
        }

        for(int j=0;j<i+1;j++)
        {
            printf("* ");
        }

        printf("\n");
    }
}
