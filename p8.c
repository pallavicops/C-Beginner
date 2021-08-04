#include <stdio.h>
#include <math.h>
#define PI 3.1415
int main()
{
    int i, degree;
    float x, term, nume, deno, sum = 0;
    printf("enter the value of degree\n");
    scanf("%d", &degree);
    x = degree * (PI / 180);
    nume = x;
    deno = 1;
    i = 2;
    do
    {
        term = nume / deno;
        nume = -nume * x * x;
        sum += term;
        i += 2;
    } while (fabs(term) >= 0.00001);
    printf("the sine of %d is %3f\n", degree, sum);
    printf("the sine function of %d is %3f", degree, sum);
    return 0;
}