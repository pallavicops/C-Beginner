#include <stdio.h>
void main()
{
    int key;
    int size;                            //size is use for size of array
    printf("enter the size of array\n"); //reading size of array

    scanf("%d", &size); //righting size of array
    int a[size];        //declear array

    printf("enter the veluse of array"); //reading values of array
    for (int i = 0; i < size; i++)       //i is use for coloum
    {

        scanf("%d", &a[i]); //righting the value of array
    }
    printf("enter the key to be searched ");
    scanf("%d", &key);
    for (int i = 0; i < size; i++)
    {
        if (key == a[i])
        {
            printf("search is successful");
            break;
        }
        else
        {
            printf("search is unsuccessful");
            break;
        }
    }
}