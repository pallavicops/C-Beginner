#include <stdio.h>
void main()
{
    char op;
    int n1, n2;
    //printf("enter the oprator you want to oprate (+,-,*,/)\n");
    //scanf("%c \n", &op);
    printf("enter any two number which U want to oprate\n");
    scanf("%d%d\n ", &n1, &n2);
    printf("enter the oprator you want to oprate (+,-,*,/)\n");
    scanf("%c ", &op);

    switch (op)
    {
    case '+':
        printf("%d+%d=%d", n1, n2, n1 + n2);
        break;

    case '-':
        printf("%d-%d=%d", n1, n2, n1 - n2);
        break;

    case '*':
        printf("%d*%d=%d", n1, n2, n1 * n2);
        break;

    case '/':
        printf("%d/%d=%d", n1, n2, n1 / n2);
        break;

    default:
        printf("Opps error!");
    }
}