#include <stdio.h>

struct student
{
    char name[20];
    int rollno;
    float mark;
    char city[20];
    char dream[20];
};

int main()
{
    struct student s[10];
    int i;

    printf("-- ENTER THE DETAILS OF THE 10 STUDENTS --\n");

    for (i = 0; i < 10; i++)
    {
        printf("\nStudent %d:\n", i + 1);

        printf("ENTER NAME: ");
        scanf(" %19[^\n]", s[i].name);

        printf("ENTER THE ROLL NO: ");
        scanf("%d", &s[i].rollno);

        printf("ENTER MARKS: ");
        scanf("%f", &s[i].mark);

        printf("ENTER CITY: ");
        scanf(" %19[^\n]", s[i].city);

        printf("ENTER DREAM: ");
        scanf(" %19[^\n]", s[i].dream);
    }

    for (i = 0; i < 10; i++)
    {
        printf("\nStudent %d Details:\n", i + 1);
        printf("NAME: %s\n", s[i].name);
        printf("ROLL NO: %d\n", s[i].rollno);
        printf("MARK: %.2f\n", s[i].mark);
        printf("CITY: %s\n", s[i].city);
        printf("DREAM: %s\n", s[i].dream);
    }

    return 0;
}