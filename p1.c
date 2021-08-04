#include <stdio.h>
void main()
{
    int a, b, res;
    char choice;
    printf("enter your choice out of +,-,*,/:");
    scanf("%c", &choice);
    printf("Enter the two oprands");
    scanf("%d%d", &a, &b);
    switch (choice)
    {
    case '+':
        res = a + b;
        printf("%d", res);
        break;
    case '-':
        res = a - b;
        printf("%d", res);
        break;
    case '*':
        res = a * b;
        printf("%d", res);
        break;
    case '/':
        res = a / b;
        printf("%d", res);
        break;
    default:
        printf("error");
    }
}