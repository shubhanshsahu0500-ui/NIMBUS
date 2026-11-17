
#include <stdio.h>

struct student
{
    char name[30];
    int roll;
    int marks;
    float percentage;
};

int main()
{
    struct student s;
    char key[5] = {'A', 'B', 'C', 'D', 'A'};
    char ans[5];
    int i;

    printf("Enter student name: ");
    scanf("%29s", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("\nEnter answers (A/B/C/D):\n");

    for(i = 0; i < 5; i++)
    {
        printf("Question %d: ", i + 1);
        scanf(" %c", &ans[i]);
    }

    s.marks = 0;

    for(i = 0; i < 5; i++)
    {
        if(ans[i] == key[i])
        {
            s.marks++;
        }
    }

    s.percentage = (s.marks * 100.0f) / 5;

    printf("\n----- RESULT -----\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll);
    printf("Marks: %d out of 5\n", s.marks);
    printf("Percentage: %.2f%%\n", s.percentage);

    if(s.percentage >= 90)
        printf("Grade: A\n");
    else if(s.percentage >= 75)
        printf("Grade: B\n");
    else if(s.percentage >= 40)
        printf("Grade: C\n");
    else
        printf("Grade: Fail\n");

    return 0;
}
