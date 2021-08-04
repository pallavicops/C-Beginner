#include <stdio.h>
#include <string.h>
struct student
{
    char name[100];
    int mark;

} s[100];
int main()
{
    int i, n, avgmark, total = 0;
    printf("enter the number of student \n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("enter the name of student \n");
        scanf("%s", &s[i].name);
        printf("enter the mark of  student out of 50\n ");
        scanf("%d", &s[i].mark);
    }
    for (i = 0; i < n; i++)
    {
        printf("the student name is%s\n", s[i].name);
        printf("the student mark is  %d\n", s[i].mark);
    }
    for (i = 0; i < n; i++)
    {
        total = total + s[i].mark;
    }
    printf("total=%d\n", total);
    avgmark = total / n;
    printf("the class average mark is %d\n", avgmark);
    for (i = 0; i < n; i++)
    {
        if (s[i].mark > avgmark)
        {
            printf("%s is score above the class average \n", s[i].name);
        }
        else
        {
            printf("%s is score less  the class average \n ", s[i].name);
        }
    }
    return 0;
}