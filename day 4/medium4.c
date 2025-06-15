// link - "https://www.hackerrank.com/challenges/frequency-of-digits-1/problem?isFullScreen=true"
/*
problem name : 

Digit Frequency

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char s[1000];
    int count[10] ={};  
    scanf("%s",s);
    
    for(int i=0; s[i]!='\0';i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            count[s[i]-'0']++;
        }
    }
    
    for(int i = 0; i<10; i++)
    {
        printf("%d ",count[i]);
    }
    return 0;
}
