#include <stdio.h>
void main()
{
    int n, num, r;
    int rev = 0;
    printf("\n Enter a four digit number \n");
    scanf("%d", &n);
    num = n;
    while (n != 0)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    if (rev == num)
    {
        printf("\n the number is palindrome");
    }
    else
    {
        printf("\n the number is not palindrome");
    }
}