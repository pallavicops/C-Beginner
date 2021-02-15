#include <stdio.h>
#include <math.h>
void main()
{
    float a, b, c, d;
    float root1, root2;
    printf("enter your value for coeffiecent");
    scanf("%f %f %f", &a, &b, &c);

    d = (b * b) - (4 * a * c);

    if (d == 0)
    {
        printf("the roots are real and equal ");
        root1 = root2 = -b / (2 * a);
        printf("%f %f ", root1, root2);
    }
    else if (d > 0)
    {
        printf(" roots are real and distinct  ");
        root1 = (-b + (sqrt(d))) / (2 * a);
        root2 = (-b - (sqrt(d))) / (2 * a);
        printf("%f %f ", root1, root2);
    }

    // else if (d < 0)
    //{
    //  printf("roots are real and imaginary ");
    //root1 = (-b + sqrt(fabs(d))) / (2 * a);
    //root2 = (-b - sqrt(fabs(d))) / (2 * a);
    //printf("%f %f ", root1, root2);
    // }
    else
    {
        printf("the root are complex and imaginary\n");
        root1 = -b / (2 * a);
        root2 = (sqrt(fabs(d))) / (2 * a);
        printf("root1=%f+i%f\n", root1, root2);
        printf("root2=%f-i%f\n", root1, root2);
    }
}