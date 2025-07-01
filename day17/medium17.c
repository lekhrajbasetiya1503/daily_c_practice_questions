/*
problem name : 

write a program to add a character in string and shift the values also.
*/

#include<stdio.h>
#include<string.h>

int main()
{
    char str[21] = "collage";
    char x,y;
    printf("enter the character you want to store in string : ");
    scanf(" %c", &x);
    printf("and where the character in string: ");
    scanf(" %c", &y);
    for(int i=0;i<20;i++)
    {
        if(str[i]==y)
        {
            for (int j = 20; j >= i; j--) {
                str[j + 1] = str[j];
            }
            str[i] = x;
            break;
            
        }
        }
        printf("modified stirng : %s\n",str);
    }

