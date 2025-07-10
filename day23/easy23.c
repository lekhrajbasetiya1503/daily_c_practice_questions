/*
problem statement : 
write a program to calculate the sum,avg or standard deviation of 5 numbers.
 */
# include <stdio.h>
#include<math.h>

void operation(int a,int b,int c,int d,int e,int *sum,float *avg,double *stdev)
{
    *sum = a+b+c+d+e;
    *avg = *sum/5.0;
    *stdev = sqrt((pow((a-*avg),2.0) + pow((b-*avg),2.0) + pow((c-*avg),2.0) + pow((d-*avg),2.0) +pow((e-*avg),2.0))/4);
}
int main( )
{
    int a,b,c,d,e;
    int sum;
    float avg;
    double stdev;
    printf("ener the 5 values these sum,avg,stdev you want : ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    operation(a,b,c,d,e,&sum,&avg,&stdev);
    printf("sum : %d\n",sum);
    printf("avg : %f\n",avg);
    printf("stdev : %lf\n",stdev);

}


