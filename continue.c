#include <stdio.h>
int main()
{
    int num;
    printf("enter number you chek ");
    scanf("%d ", &num);
    for (int i = 2; i <= num / 2; i++)
        if (num % i == 0)
        {
            printf("prime");
        }
        else
        {
            printf("not prime ");
        }
}
