#include <stdio.h>
int convert(int num)
{
    if (!(num / 10))
        return (num);
    else
        return (num % 10 + convert(num / 10) * 2);
}
int main()
{
    int binary, decimal;
    printf("enter the binary number to be converted \n");
    scanf("%d", &binary);
    decimal = convert(binary);
    printf("the decimal number for %d is %d ", binary, decimal);
}