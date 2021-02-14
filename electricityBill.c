#include <stdio.h>
int main()
{
    int unit;
    float amt;
    char name[10];
    printf("enter the of the user name\n");
    // scanf("%s", &name);
    gets(name);
    printf("enter the munber of unit\n ");
    scanf("%d", &unit);

    if (unit <= 200)
    {
        amt = unit * 0.8;
        if (amt < 100)
            amt = 100;
    }
    else if (unit > 200 && unit < 300)
        amt = 200 * 0.8 + (unit - 200) * 0.9;

    else if (unit > 300)
        amt = (200 * 0.8) + (100 * 0.9) + (unit - 300) * 1.0;
    else if (amt > 400)
        amt = amt + 0.15 * amt;

    printf("electricity charge for the user %s = %f", name, amt);
}