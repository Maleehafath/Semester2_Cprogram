#include<stdio.h>
struct class
{
    int number;
    char name[20];
    float marks;
};
int main()
{
    int x;
    struct class student1={111,"Rao",72.50};
    struct class student2={222,"Reddy",67.00};
    struct class student3;
    
    student3=student2;
    x=((student3.number==student2.number)&&(student3.marks==student2.marks))?1:0;
    if (x==1)
    {
        printf("\nStudent2 and Student3 are same");
    }
    else
        printf("\nStudent2 and Student3 are different");
}
