#include<stdio.h>
#include<conio.h>
void swap(int x,int y)
{
int temp;
clrscr();
temp=x;
x=y;
y=temp;
printf("RISHA\n");
printf("x=%d\n y=%d\n",x,y);
}
void main()
{
int a=10, b=20;
swap(a,b);
printf("a=%d\n b=%d\n",a,b);
getch();
}