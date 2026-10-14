#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    float marks;
};

int main()
{
    struct Student s[100];

    struct Student *p;
    struct Student *topper;

    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll: ");
        scanf("%d", &s[i].roll);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    p = s;
    topper = s;

    for(i = 0; i < n; i++)
    {
        if(p->marks > topper->marks)
        {
            topper = p;
        }

        p++;
    }

    printf("\nTopper Details:\n");

    printf("Name = %s\n", topper->name);
    printf("Roll = %d\n", topper->roll);
    printf("Marks = %.2f\n", topper->marks);

    return 0;
}
