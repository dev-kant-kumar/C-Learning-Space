#include <stdio.h>
#include <string.h>

struct Student
{
    int roll;
    char name[50];
} typedef stu;

void enterData(stu *s);
void findStudent(stu *s);

int main()
{

    int noOfStu;
    printf("No of student to add : ");
    scanf("%d", &noOfStu);

    stu s1[noOfStu];

    printf("Enter data of student as asked below\n");

    for (int i = 1; i <= noOfStu; i++)
    {
        enterData(&s1[i]);
    }
    printf("\nStudent Added successfully\n");

    int stuRoll;
    printf("\nFind student by roll \n");
    printf("Roll of student : ");
    scanf("%d", &stuRoll);

    findStudent(&s1[stuRoll]);

    return 0;
}

void enterData(stu *s)
{
    char name[50];

    printf("Roll : ");
    scanf("%d", &s->roll);
    printf("Name : ");
    scanf(" %49[^\n]s", name);
    strcpy(s->name, name);
    printf("\n");
}

void findStudent(stu *s)
{
    printf("\nWe found this student with details as below\n");
    printf("Roll : %d | Name : %s \n", s->roll, s->name);
}