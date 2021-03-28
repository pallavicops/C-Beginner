//GCD-greatest common divisor
#include <stdio.h>
int gcd(int m, int n);
void main()
{
    int m, n, ans;
    printf("enter the valu of two number \n");
    scanf("%d%d", &m, &n);
    ans = gcd(m, n);
    printf("%d=ans\n", ans);
}
int gcd(int m, int n)
{
    if (n == 0)
    {
        return m;
    }

    if (n == m)
    {
        return m;
    }
    if (m < n)
    {

        return gcd(n, m);
    }
    if (m > n)
    {
        return gcd(n, m - n);
    }
}