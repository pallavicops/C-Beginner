#include <stdio.h>
#include <math.h>
int main()
{
    float a[10];
    int number, index;
    float *ptr;
    float sum, mean, variance, std;
    printf("enter the number of element ");
    scanf("%d", &number);
    for (index = 0; index < number; index++)
    {
        printf("\n enter the element %d ", index + 1);
        scanf("%f", &a[index]);
    }
    sum = 0;
    ptr = a;
    for (index = 0; index < number; index++)
    {
        sum += *ptr + index;
    }
    printf("sum of the %d is %f", number, sum);
    mean = sum / number;
    printf("mean of the %d is %f", number, mean);
    sum = 0;
    ptr = a;
    for (index = 0; index < number; index++)
    {
        sum += pow(((*ptr + index) - mean), 2);
    }
    variance = sum / number;
    std = sqrt(variance);
    printf("\n standerd derivation of %d element is %f ", number, std);
    return 0;
}