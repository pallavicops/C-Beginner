#include <stdio.h>
int factorial(int);
int main()
{
    int i, c, n;
    printf("enter the number of rows you wish to see in pascal tringle\n");
    scanf("%d", &n); //Reading the number of row from user
    for (i = 0; i < n; i++)
    {
        for (c = 0; c <= (n - i - 2); c++)
        {

            printf(" ");
        }
        for (c = 0; c <= i; c++) //getting the next pascal value
        {
            printf(" %d ", factorial(i) / (factorial(c) * factorial(i - c)));
        }
        printf("\n");
    }
    return 0;
}
int factorial(int n)
{
    //General Way
    int c;
    int result = 1;
    for (c = n; c > 0; c--)
        result = result * c;
    return result;

    //Using Recursive function
    // if (n == 0)
    // {
    //     return 1;
    // }
    // else
    // {
    //     return n * factorial(n - 1);
    // }
}