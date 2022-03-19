#include<stdio.h>
#include<conio.h>
void main()
{
int num;
printf("enter the number\n");
scanf("%d",&num);
if(num>0.0)
{
printf("number is positive");
}
else if(num<0.0)
{
printf("number is negative");
}
else
{
printf("number is 0");
}
getch();
}