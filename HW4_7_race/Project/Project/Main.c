#include<stdio.h>
#include<stdlib.h>
#define STUDENTS 4
#define EXAMS 4

void printArray(const int gredes[][EXAMS],int pupils,int tests);
int minimum(const int gredes[][EXAMS], int pupils, int tests);
int maximum(const int gredes[][EXAMS], int pupils, int tests);
double average(const int setofGrades[], int tests);
int maxgrade(const int setofGrades[], int tests);
int mingrade(const int setofGrades[], int tests);
int main() {
    const int studentGrades[STUDENTS][EXAMS] =
    { {77,68,86,73},{96,87,89,78} ,{70,90,86,81} ,{86,92,93,75} };
    int student;

    printf("The array is:\n");
    printArray(studentGrades, STUDENTS, EXAMS);

    printf("\n\nLowest grade: %d\nHIghesst grade: %d\n",
        minimum(studentGrades, STUDENTS, EXAMS),
        maximum(studentGrades, STUDENTS, EXAMS));
    for (student = 0; student < STUDENTS; student++)
    {
        printf("The average grade for student %d is %.2f\n",
            student, average(studentGrades[student], EXAMS));
        printf("The max grade for student %d is %d\n",
            student, maxgrade(studentGrades[student], EXAMS));
        printf("The min grade for student %d is %d\n",
            student, mingrade(studentGrades[student], EXAMS));
    }
    system("pause");
    return 0;
}
void printArray(const int gredes[][EXAMS], int pupils, int tests)
{
    int i, j;
    printf("\t\t [0]  [1]  [2]  [3]");
    for (i = 0; i < pupils; i++)
    {
        printf("\nstudentGrades[%d] ", i);
        for (j = 0; j < tests; j++)
        {
            printf("%-5d", gredes[i][j]);
        }
    }
}
int minimum(const int gredes[][EXAMS], int pupils, int tests)
{
    int i, j, lowGrade = 100;
    for (i = 0; i < pupils; i++)
    {
        for (j = 0; j < tests; j++)
        {
            if (gredes[i][j] < lowGrade)
                lowGrade = gredes[i][j];
        }
    }
    return lowGrade;
}
int maximum(const int gredes[][EXAMS], int pupils, int tests)
{
    int i, j, highGrade = 0;
    for (i = 0; i < pupils; i++)
    {
        for (j = 0; j < tests; j++)
        {
            if (gredes[i][j] > highGrade)
                highGrade = gredes[i][j];
        }
    }
    return highGrade;
}
double average(const int setofGrades[], int tests)
{
    int i, total = 0;
    for (i = 0; i < tests; i++)
    {
        total += setofGrades[i];
    }
    return (double)total/tests;
}
int maxgrade(const int setofGrades[], int tests)
{
    int i, j, maxGrade = 0;
    for (i = 0; i < tests; i++)
    {
        if (setofGrades[i] > maxGrade)
            maxGrade = setofGrades[i];
    }
    return maxGrade;
}
int mingrade(const int setofGrades[], int tests)
{
    int i, j, minGrade = 100;
    for (i = 0; i < tests; i++)
    {
        if (setofGrades[i] < minGrade)
            minGrade = setofGrades[i];
    }
    return minGrade;
}