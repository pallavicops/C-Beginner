#include <stdio.h>
int isprime(int m)
{
    for (int i = 2; i < m / 2; i++)
    {
        if (m % i == 0)
            return 0;
    }
    return 1;
}
void main()
{
    int num;
    printf("enter the number to check");
    scanf("%d", &num);
    if (isprime(num))
    {
        printf("number is prime");
    }
    else
    {
        printf("number is not prime");
    }
}