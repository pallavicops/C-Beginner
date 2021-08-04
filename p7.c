#include <stdio.h>
void main()
{
    int m, n, p, q, i, j;
    int a[10][10], b[10][10], c[10][10];
    printf("enter the row and column for first matrix");
    scanf("%d%d", &m, &n);
    printf("enter the row and column for second matrix");
    scanf("%d%d", &p, &q);
    if (n != p)
    {
        printf("can not multiply matrix");
    }
    printf("enter the element of matrix");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }
    printf("enter the element of matrix");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
            scanf("%d", &b[i][j]);
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)

            c[i][j] = 0;
    }
    for (int k = 0; k < n; k++)
    {
        c[i][j] = c[i][j] + a[i][k] * b[j][k];
    }
    printf("the resulting matrix is");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
            printf("%d", c[i][j]);
    }
    printf("\n");
}
