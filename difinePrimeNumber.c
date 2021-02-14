//to print prime number
#include <stdio.h>
int isprime(int m)
{
    int i;
    for (i = 2; i <= m / 2; i++)
    {
        if (m % i == 0)
            return 0;
    }
    return 1;
}
void main()
{
    int num;
    printf("Enter the nmuber you chek ");
    scanf("%d", &num);
    if (isprime(num))
        printf("number %d is prime number ", num);
    else
        printf("number %d is not a prime number  ", num);
}