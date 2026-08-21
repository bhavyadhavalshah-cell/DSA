#include<stdio.h>
#define SIZE 3
struct student
{
    char name[30];
    int maths;
    int sci;
    int eng;
    float perc;
    char grade;
};

struct student s[SIZE];

void getData()
{
    for (int i = 0; i < SIZE; i++)
    {
        printf("\nEnter name and marks of three subjects");
        scanf("%s%d%d%d", &s[i].name, &s[i].maths, &s[i].sci, &s[i].eng);
    }
}

void calcperAndGrade()
{
    for (int i = 0; i < SIZE; i++)
    {

        s[i].perc = (s[i].maths + s[i].sci + s[i].eng) / 3.0;

        if (s[i].perc >= 35)
        {
            s[i].grade = 'P';
        }
        else
        {
            s[i].grade = 'F';
        }
    }
}

void display()
{
    printf("\nName\tMaths\tScience\tEnglish\tPerc\tGrade\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%-15s\t%-10d\t%-10d\t%-10d\t%.2f\t%c\n", s[i].name, s[i].maths, s[i].sci, s[i].eng, s[i].perc, s[i].grade);
    }
}

int main()
{
    getData();
    calcperAndGrade();
    display();
    return 0;
}