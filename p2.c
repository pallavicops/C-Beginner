#include <stdio.h>
#include <math.h>
void main()
{
    float a, b, c, d, x1, x2;
    printf("Enter three non coefficiant\n");
    scanf("%f%f%f", &a, &b, &c);

    d = (b * b) - (4 * a * c);
    if (d == 0)
    {
        printf("The roots are real and equal\n");
        x1 = x2 = -b / (2 * a);
        printf("root1=%f,root=%f", x1, x2);
    }
    if (d > 0)
    {
        printf("The roots are real and distinct\n");
        x1 = -b + (sqrt(d)) / (2 * a);
        x2 = -b - (sqrt(d)) / (2 * a);
        printf("root1=%f,root2=%f", x1, x2);
    }
    if (d < 0)
    {
        printf("The roots are complex\n");
        x1 = -b / (2 * a);
        x2 = (sqrt(fabs(d))) / (2 * a);
        printf("root1=%f+i%f", x1, x2);
        printf("root2=%f-i%f", x1, x2);
    }
}