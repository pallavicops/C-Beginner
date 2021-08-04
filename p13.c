#include <stdio.h>
#include <math.h>
int main()
{
    float a[100];
    int i, n;
    float *ptr;
    float sum, mean, variance, std;
    printf("Enter the no. of element ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter the %d no.element ", i + 1);
        scanf("%f", &a[i]);
    }
    sum = 0;
    ptr = a;
    for (i = 0; i < n; i++)
    {
        sum = sum + *(ptr + i);
    }
    printf("\n sum of %d no. is %f", n, sum);
    mean = sum / n;
    printf("mean of %d no. is %f", n, mean);
    sum = 0;
    ptr = a;
    sum = sum + pow((*(ptr + i) - mean), 2);
    variance = sum / n;
    std = sqrt(variance);
    printf("the standard derivation of %d element is %f", n, std);
    return 0;
}