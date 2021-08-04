#include <stdio.h>
int main()
{
    int a[10], n, temp, i, j;
    printf("enter the number of element\n");
    scanf("%d", &n);
    printf("enter the elements");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("the original element are\n");
    for (i = 0; i < n; i++)
        printf("%d\n", a[i]);
    for (i = 1; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("the sorted elements are\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}