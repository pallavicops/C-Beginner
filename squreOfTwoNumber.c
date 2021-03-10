#include <stdio.h>
int squre(int x);
int main()
{
    int n, sqr;
    printf("Enter the number as you see in squre");
    scanf("%d", &n);
    sqr = squre(n);
    printf("%d =is squre", sqr);
}
int squre(int x)
{
    int s;
    s = x * x;
    return s;
}