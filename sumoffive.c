#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n, remainder, quotient, value, totalSum = 0;
    scanf("%d", &n);
    value = n;

    while (quotient != 0)
    {
        quotient = value / 10;
        remainder = value % 10;
        totalSum += remainder;
        value = quotient;
    }
    printf("%d", totalSum);
    return 0;
}