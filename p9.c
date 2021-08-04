#include <stdio.h>
#include <string.h>
void pass_string(char s1[10], char s2[10])
{
    int result, length;
    printf("the string 1 is ");
    puts(s1);
    printf("the string 2 is");
    puts(s2);
    result = strcmp(s1, s2);
    if (result == 0)
    {
        printf("the strings are equal\n");
    }
    else
    {
        printf("the strings are not equal\n");
    }
    printf("the concatinated string is\n");
    strcat(s1, s2);
    puts(s1);
    length = strlen(s1);
    printf("the length of the string is %d\n", length);
}
int main()
{
    char a[10], b[10];
    printf("enter the string 1\n");
    gets(a);
    printf("enter the string 2\n");
    gets(b);
    pass_string(a, b);
    return 0;
}
