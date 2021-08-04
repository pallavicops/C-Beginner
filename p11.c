#include <stdio.h>
void main()
{
    float num, j = 0.0001;
    float i;
    printf("enter any number");
    scanf("%f", &num);

    for (i = 0; i < num; i + j)
    {
        if ((i * i) > num)
        {
            i = i - j;
            break;
        }
    }
    printf("sqrt of the given number is\n");
    printf("%3f", i);
}