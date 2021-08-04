#include <stdio.h>
void main()
{
    int n, num[10], key, low, high, mid;
    int found = 0;
    printf("enter the number of element ");
    scanf("%d", &n);
    printf("enter the %d number of element in asending order", n);
    for (int i = 0; i < n; i++)

        scanf("%d", &num[i]);

    printf("Enter the key which you want to search");
    scanf("%d", &key);
    low = 0;
    high = n - 1;
    while (low <= high && !found) //chack once
    {
        mid = (low + high) / 2;
        if (num[mid] = key)
        {
            found = 1;
        }
        else if (key > num[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if (found = 1)
        printf("key is found in the podition%d", num[mid]);
    else
        printf("key is not found!!");
}