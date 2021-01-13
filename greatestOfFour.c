#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int e, int f, int g, int h)
{
    if (e > f && e > g && e > h)
    {
        return e;
    }
    else if (f > e && f > g && f > h)
    {
        return f;
    }
    else if (g > e && g > f && g > h)
    {
        return g;
    }
    else
    {
        return h;
    }
}
int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}