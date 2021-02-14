#include <stdio.h>
int add(int, int);
int main()
{
    int ans = add(4, 8);
    printf("%d", ans);
    return 0;
}

int add(int j, int k)
{

    int h = j + k;
    return h;
}