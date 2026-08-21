#include<stdio.h>

struct student
{
    char name[30];
    int maths;
    int sci;
    int eng;
    float perc;
    char grade;
};
void scandata(struct student *s)
{
    printf("Enter the Name : ");
    scanf("%s",s->name);
    printf("Enter Maths Marks : ");
    scanf("%d",&s->maths);
    printf("Enter Science Marks : ");
    scanf("%d",&s->sci);
    printf("Enter English Marks : ");
    scanf("%d",&s->eng);
}
void calcperAndGrade(struct student *s)
{

    s->perc = (s->maths + s->sci + s->eng) / 3.0;
    printf("Percentage : %.2f\n",s->perc);
    if (s->perc >= 35)
    {
        s->grade = 'P';
    }
    else
    {
        s->grade = 'F';
    }
}

int main()
{
    struct student s;
    scandata(&s);
    calcperAndGrade(&s);
    printf("Grade : %c\n",s.grade);
    return 0;
}