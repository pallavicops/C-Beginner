#include <stdio.h>
int binary_to_decimal(int num)
{
    if (!(num / 10))
    {
        return (num);
        printf("%d", num);
    }
    else
    {
        return (num % 10 + (binary_to_decimal(num / 10) * 2));
    }
}
int main()
{
    int binary, decimal;
    printf("enter the binary  number to be converted \n");
    scanf("%d", &binary);
    decimal = binary_to_decimal(binary);
    printf("decimal no. of %d is %d", binary, decimal);
    return 0;
}
