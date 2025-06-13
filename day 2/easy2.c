// link :- "https://www.hackerrank.com/challenges/pointer-in-c/problem?isFullScreen=true"

/*
problem name:-

pointer in c
*/



#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function    
    int temp1,temp2;
    
    temp1 = *a + *b;
    temp2 = *a - *b;
    *a = temp1;
    if (temp2>0)
       *b = temp2;
    else
       *b = -(temp2); 
       

}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}