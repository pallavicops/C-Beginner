//to print fabonacci series
#include <stdio.h>
int fabonacci(int);
void main()
{
    int n, j = 0;
    printf("enter thr no of turm\n");
    scanf("%d", &n);
    printf("fabonacci term are \n");
    for (int i = 0; i < n; i++)
        printf("%d\t", fabonacci(i));
}
int fabonacci(int n)
{
    if (n == 0 || n == 1)
        return n;
    else
        return (fabonacci(n - 1) + fabonacci(n - 2));
}