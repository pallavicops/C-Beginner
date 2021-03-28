//To find factorial ot n number .
#include <stdio.h>
int fact(int);
void main()
{
    int n;
    int factorial;
    printf("enter the number of factorial\n");
    scanf("%d", &n);
    factorial = fact(n);
    printf("%d = factorial of %d ", factorial, n);
}
int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return (n * fact(n - 1));
}