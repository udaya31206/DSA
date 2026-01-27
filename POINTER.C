#include<stdio.h>
#include<conio.h>
struct student {
int roll;
char name[20];
int marks;
}s;
void main()
{
struct student *ptr;

ptr=&s;

printf("enter roll no: ");
scanf("%d",&ptr->roll);
printf("enter name: ");
scanf("%s",&ptr->name);
printf("enter marks: ");
scanf("%d",&ptr->marks);
printf("details:roll%d\n name %s\n marks %d\n",ptr->roll,ptr->name,ptr->marks);
getch();
}