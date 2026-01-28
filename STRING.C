#include<stdio.h>
#include<string.h>
int main()
{
clrscr();
char a[50],b[50];
printf("enter a string: ");
scanf("%s",&a);
strcpy(b,a);
strrev(b);
if(strcmp(a,b)==0)
{
printf("this is a palanidrome");
}
else
{
printf("this is not a palindrome");
}
getch();
}