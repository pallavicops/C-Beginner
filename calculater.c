#include <stdio.h>
int main()
{
    int a, b;
    char operation;
    printf("enter your operation (+,-,*,/) \n");
    scanf("%c", &operation);
    printf("enter two number \n");
    scanf("%d %d", &a, &b);

    if (operation)
    {
        if ('+')
        {
            printf("%d", a + b);
        }
        else if ('-')
        {
            printf("%d", a - b);
        }
        else if ('*')
        {
            printf("%d", a * b);
        }
        else if ('/')
            printf("%d", a / b);
    }
    else
        printf("there is some error !");
    return 0;
}