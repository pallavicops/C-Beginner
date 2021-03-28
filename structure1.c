#include <stdio.h>
struct student
{
    char name[100];
    int mark;
} s[10];
int main()
{
    int i, total = 0, avg, mark, n;
    printf("enter the number of student\n ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)

    {
        printf("enter studen name\n");
        scanf("%s", &s[i].name);
        printf("enter the mark of studentout of 50\n");
        scanf("%d", &s[i].mark);
    }
    for (i = 0; i < n; i++)
    {
        printf("\nThe student name is :%s\n", s[i].name);
        printf("\nthe student mark is =%d\n", s[i].mark);
    }
    for (i = 0; i < n; i++)
    {
        total = total + s[i].mark;
    }
    avg = total / n;
    printf("avgmark=%d", avg);

    for (i = 0; i < n; i++)
    {
        if (s[i].mark < avg)
        {
            printf("%s is scord less than avg ", s[i].name);
        }
        else if (s[i].mark = avg)
        {
            printf("%s is scord equal than avg", s[i].name);
        }
        else if (s[i].mark > avg)
        {
            printf("%s is scord greater than avg", s[i].name);
        }
    }
}