#include<stdio.h>
#include<conio.h>
void sum(int a, int b)
{
int c;
c=a+b;
printf("Sum: %d",c);
}
void main()
{
int a,b;
clrscr();
printf("enter a and b:");
scanf("%d%d",&a,&b);
sum(a,b);
getch();
}
