#include<stdio.h>
#include<conio.h>
void main()
{
int num;
clrscr();
printf("enter the number");
scanf("%d",&num);
if(num>100)
{
printf("number is greater than 100");
}
else if(num<1000)
{
printf("number is less then 1000");
}
else
{
printf("number is equal to 100");
}
getch();
}