#include<stdio.h>
struct book
{
    char title[100];
    char author[100];
    int pages;
    float price;
};
struct book b1,b2;
int main()
{
    printf("Enter details of book1:");
    scanf("%s %s %d %f",b1.title,b1.author,&b1.pages,&b1.price);
    printf("The details of book1 are:\nTITLE:%s\nAUTHOR:%s\nPAGE NO.:%d\nPRICE:%f",b1.title,b1.author,b1.pages,b1.price);
    b2=b1;
    printf("\nThe details of book2 are:\nTITLE:%s\nAUTHOR:%s\nPAGE NO.:%d\nPRICE:%f",b2.title,b2.author,b2.pages,b2
    .price);
}
