

#include <stdio.h>

int main()
{
    int sumpos = 0;
    int sumneg = 0;
    int sum = 0;                         //sum is declear for adding all value
    int size;                            //size is use for size of array
    printf("enter the size of array\n"); //reading size of array

    scanf("%d", &size); //righting size of array
    int a[size];        //declear array

    printf("enter the veluse of array"); //reading values of array
    for (int i = 0; i < size; i++)       //i is use for coloum
    {

        scanf("%d", &a[i]); //righting the value of array
        sum = sum + a[i];   //sum is use for add all value of array
    }
    //printf(" sum of all integer in the array =%d", sum); //reading sum
    int average;
    for (int i = 0; i < size; i++)
    {

        if (a[i] < 0)
        {
            sumneg = sumneg + a[i];
        }
        else
        {
            sumpos = sumpos + a[i];
        }
        average = (sumneg + sumpos) / 2;
    }
    printf("sumpos=%d\n", sumpos);
    printf("sumneg=%d\n", sumneg);
    printf(" sum of all integer in the array =%d\n", sum);
    printf("average=%d\n", average);
    return 0;
}