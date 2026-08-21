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
void scandata(struct student *s)
{
    for(int i=0; i<SIZE; i++)
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
}
void calcperAndGrade(struct student *s)
{
    for(int i=0; i<SIZE; i++)
    {
        s->perc = (s->maths + s->sci + s->eng) / 3.0;
        if (s->perc >= 35)
        {
            s->grade = 'P';
        }
        else
        {
            s->grade = 'F';
        }
    }
}

void display(struct student *s)
{
    for(int i=0; i<SIZE; i++)
    {
        printf("\n------------------------------\n");
        printf("Name : %s\n",s->name);
        printf("Maths Marks : %d\n",s->maths);
        printf("Science Marks : %d\n",s->sci);
        printf("English Marks : %d\n",s->eng);
        printf("Percentage : %.2f\n",s->perc);
        printf("Grade : %c\n",s->grade);
    }
}

int main()
{
    struct student s[SIZE];
    scandata(s);
    calcperAndGrade(s);
    display(s);
    return 0;
}