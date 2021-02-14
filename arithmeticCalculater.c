#include <stdio.h>

int main()
{
    int a, b, answer;
    char op;
    printf("enter your opration (+,-,*,/) \n");
    scanf("%c", &op);
    printf("enter your numbers \n");
    scanf("%d%d", &a, &b);
    // printf("enter your opration (+,-,*,/)");
    // scanf("%s", &op);

    switch (op)
    {
    case '+':
        printf("%d", a + b);
        break;
    case '-':
        printf("%d", a - b);
        break;

    case '*':
        printf("%d", a * b);
        break;

    case '/':
        printf("%d", a / b);
        break;

    default:
        printf("some error ");
        break;
    }
    return 0;
}
