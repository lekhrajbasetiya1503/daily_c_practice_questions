// link :- "https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number/problem?isFullScreen=true"

/*
problem name:-

sum of digits of five digit numbers
*/



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,sum=0;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    while(n!=0)
    {
        sum += n%10;
        n = n/10;
    }
    printf("%d",sum);
    return 0;
}