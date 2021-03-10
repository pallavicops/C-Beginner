#include "stdio.h"
#include "avg.h"
void main()
{
    int n1, n2, sum;
    printf("enter the value of two number");
    scanf("%d%d", &n1, &n2);
    sum = avg(n1, n2);
    printf("avg=%d", sum);
}