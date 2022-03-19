#include<stdio.h>
#include<conio.h>
void main()
{
int year;
clrscr();
printf("RISHA\n");
printf("enter year");
scanf("%d",&year);
if(year%400==0||year%400==0)
{
printf("This is leap year");
}
else
{
printf("This is not a leap year");
}
getch();
}
