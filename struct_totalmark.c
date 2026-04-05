#include<stdio.h>

struct student
{
    int sub1, sub2, sub3;
    float total;
};

int main()
{
    struct student s[3]={{10,20,30},{10,20,30},{10,20,30}}, Tot;
    int i;

    Tot.sub1 = 0;
    Tot.sub2 = 0;
    Tot.sub3 = 0;

    for(i=0;i<3;i++)
    {
         s[i].total = s[i].sub1 + s[i].sub2 + s[i].sub3;

        Tot.sub1 = Tot.sub1 + s[i].sub1;
        Tot.sub2 = Tot.sub2 + s[i].sub2;
        Tot.sub3 = Tot.sub3 + s[i].sub3;
    }

    printf("\nTotal marks of each student:\n");
    for(i=0;i<3;i++)
    {
        printf("Student %d Total = %.2f\n", i+1, s[i].total);
    }

    printf("\nTotal marks of each subject:\n");
    printf("Subject 1 Total = %d\n", Tot.sub1);
    printf("Subject 2 Total = %d\n", Tot.sub2);
    printf("Subject 3 Total = %d\n", Tot.sub3);

    return 0;
}
