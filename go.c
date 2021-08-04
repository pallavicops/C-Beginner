#include <stdio.h>
int main()
{
    float num, i, j = 0.000001;
    printf("enter any number\n");
    scanf("%f", &num);

    for (i = 0; i < num; i = i + j)
    {
        if ((i * i) > num)
        {
            printf("%f", i);

            i = i - j;
            break;
        }
    }
    printf("sqrt of the given number is\n");
    printf("%3f \n", i);
    return 0;
}