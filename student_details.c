#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[50];
    int roll_no;
    char mobile_no[15];
    float CGPA;
    char DoB[15];
    char course[30];
    int year;
} Student;

Student readStudent();
void displayStudent(Student s);
float findHighestCGPA(Student s[], int n);
void displayToppers(Student s[], int n, float highest);

int main()
{
    Student s[10];
    float highest;
    int i;

    for(i = 0; i < 10; i++)
    {
        printf("\nEnter details for Student %d\n", i + 1);
        s[i] = readStudent();
    }

    highest = findHighestCGPA(s, 10);

    printf("\n\nTopper(s) of the Class:\n");
    displayToppers(s, 10, highest);

    return 0;
}

Student readStudent()
{
    Student s;

    printf("Name: ");
    scanf(" %[^\n]", s.name);

    printf("Roll No: ");
    scanf("%d", &s.roll_no);

    printf("Mobile No: ");
    scanf("%s", s.mobile_no);

    printf("CGPA: ");
    scanf("%f", &s.CGPA);

    printf("Date of Birth: ");
    scanf("%s", s.DoB);

    printf("Course: ");
    scanf(" %[^\n]", s.course);

    printf("Year: ");
    scanf("%d", &s.year);

    return s;
}

void displayStudent(Student s)
{
    printf("\nName: %s\n", s.name);
    printf("Roll No: %d\n", s.roll_no);
    printf("Mobile No: %s\n", s.mobile_no);
    printf("CGPA: %.2f\n", s.CGPA);
    printf("Date of Birth: %s\n", s.DoB);
    printf("Course: %s\n", s.course);
    printf("Year: %d\n", s.year);
}

float findHighestCGPA(Student s[], int n)
{
    float highest = s[0].CGPA;
    int i;

    for(i = 1; i < n; i++)
    {
        if(s[i].CGPA > highest)
        {
            highest = s[i].CGPA;
        }
    }

    return highest;
}

void displayToppers(Student s[], int n, float highest)
{
    int i;

    for(i = 0; i < n; i++)
    {
        if(s[i].CGPA == highest)
        {
            displayStudent(s[i]);
        }
    }
}
