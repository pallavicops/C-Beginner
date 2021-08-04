#include <stdio.h>
void main()
{
    int unit;
    float amt;
    char name[50];
    printf("Enter the name of the user\n");
    scanf("%s", &name);
    printf("Enter the name of unit\n");
    scanf("%d", &unit);

    if (unit >= 200)
    {
        amt = unit * 0.8;
        if (amt < 100)
            amt = 100;
    }
    else if (unit > 200 && unit <= 300)
    {
        amt = 200 * 0.8 + (unit - 200) * 0.9;
    }
    else
    {
        amt = (200 * 0.8) + (100 * 0.9) + (unit - 300) * 1.0;
    }
    if (amt > 400)
    {
        amt = amt + 1.5 * amt;
    }
    printf("Electrycity charge for the user\n%s=%f ", name, amt);
}