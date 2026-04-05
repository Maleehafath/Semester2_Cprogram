#include<stdio.h>
struct student
{
    int weight;
    float height;
};
struct student s[100];
int main()
{
   printf("Enter the height and weight of student1\n");
   scanf("%d %f",&s[0].weight,&s[0].height);
   printf("Enter the height and weight of student2\n");
   scanf("%d %f",&s[1].weight,&s[1].height);
   printf("Enter the height and weight of student3\n");
   scanf("%d %f",&s[2].weight,&s[2].height);
   printf("DETAILS OF THE STUDENTS\n");
   printf("WEIGHT:%d\nHEIGHT:%f\n",s[0].weight,s[0].height);
   printf("WEIGHT:%d\nHEIGHT:%f\n",s[1].weight,s[1].height);
   printf("WEIGHT:%d\nHEIGHT:%f\n",s[2].weight,s[2].height);
}
