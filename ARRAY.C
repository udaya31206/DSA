#include<stdio.h>
#include<conio.h>
int main()
{
int a[3][3],i,j;
clrscr();
printf("enter array elements: ");
for(i=0;i<3;i++)
{
  for(j=0;j<3;j++)
  {
    scanf("%d",&a[i][j]);
  }
}
printf("array elements are \n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d",a[i][j]);
}
printf("\n");
}
getch();
}

