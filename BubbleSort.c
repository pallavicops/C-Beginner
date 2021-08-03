#include <stdio.h>
void main()
{
    int a[10], i, j, n;
    int tamp;
    printf("Enter the number of element");
    scanf("%d", &n);
    printf("Enter tne  %d element", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("\n the original element is :");
    for (i = 0; i < n; i++)
        printf("%d", a[i]);

    for (i = 1; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                tamp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tamp;
            }
        }
    }
    printf("\n the sotred elements are ");
    for (i = 0; i < n; i++)
        printf("%d", a[i]);
}