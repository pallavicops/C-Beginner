#include <stdio.h>

int main()
{
    int i, number, sum;
    sum = 0;
    for (i = 1; i <= 5; i++)
    {
        printf("enter your number :");
        scanf("%d", &number);

        if (number < 0)
        {
            printf("there is negetiv number:");
        }
        else if (number > 0)

        {
            printf("there is positiv number :");
        }
        sum += number;
    }
    printf("%d", sum);
    return 0;
}