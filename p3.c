#include <stdio.h>
void main()
{
    int n, num, r;
    int rev = 0;
    printf("enter any four digit number");
    scanf("%d", &n);

    num = n;
    while (n != 0)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    printf("%d =rev,%d=num", rev, num);
    if (num == rev)
        printf("number is palindrom");
    else
        printf("number is not panlindrom");
}