#include <stdio.h>
#include <stdlib.h>
struct Student
{
    char *name;
    int *maths;
    int *sci;
    int *english;
    float *percentage;
};
int main()
{
    struct Student *s = (struct Student *)malloc(sizeof(struct Student));
    printf("Enter Name : ");
    scanf("%s", s->name);
    printf("Enter Maths Marks : ");
    scanf("%d", s->maths);
    printf("Enter Science Marks : ");
    scanf("%d", s->sci);
    printf("Enter English Marks : ");
    scanf("%d", s->english);
    *(s->percentage) = (*(s->maths) + *(s->sci) + *(s->english)) / 3.0;
    printf("\n----------------------\n");
    printf("Name      : %s\n", s->name);
    printf("Maths     : %d\n", *(s->maths));
    printf("Science   : %d\n", *(s->sci));
    printf("English   : %d\n", *(s->english));
    printf("Percentage: %.2f%%\n", *(s->percentage));
    if (*(s->percentage) >= 35)
    {
        printf("Result    : PASS\n");
    }
    else
    {
        printf("Result    : FAIL\n");
    }
    free(s->name);
    free(s->maths);
    free(s->sci);
    free(s->english);
    free(s->percentage);
    return 0;
}