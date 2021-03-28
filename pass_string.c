#include <stdio.h>
#include <string.h>
void pass_string(char s1[], char s2[])
{
    int result, length;
    printf("the string1 is \n");
    puts(s1);
    printf("the sring2 is \n");
    puts(s2);
    result = strcmp(s1, s2);
    if (result == 0)

        printf("the sring is equal\n");

    else
    {
        printf("the string is not equal\n");
    }
    printf("the concatinated string is :");
    strcat(s1, s2);
    puts(s1);
    length = strlen(s1);
    printf("the legth of the string is %d", length);
}
int main()
{
    char a[20], b[20];
    printf("Enter the element for s1");
    gets(a);
    printf("Enter the element for s2");
    gets(b);
    pass_string(a, b);
    return 0;
}