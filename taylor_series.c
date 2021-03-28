#include <stdio.h>
#include <math.h>
#define PI 3.1415

void main()
{

    int i, degree, a;
    float x, sum = 0, term, num, deno;
    printf("enter the value of degree\n");
    scanf("%d", &degree);
    x = degree * (PI / 180);
    num = x;
    deno = 1;
    i = 2;
    do
    {
        term = num / deno;
        num = -num * x * x;
        deno = deno * i * (i++);
        sum += term;
        i += 2;

    } while (fabs(term) > 0.0000001);

    printf("%f", sum);
}