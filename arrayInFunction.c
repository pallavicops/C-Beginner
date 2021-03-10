#include <stdio.h>
void avrage(int m[])
{
    int i;
    int avg, sum = 0;
    for (i = 0; i < 6; i++)
        sum = sum + m[i];
    avg = sum / 6;
    printf("aggreggate=%d", avg);
}
void main()
{
    int m[6] = {48, 56, 57, 87, 98, 65};
    avrage(m);
}