#include<stdio.h>
#include<conio.h>
int Add(int a,int b)
{
int x;
x=a+b;
return x;
}

void main()
{
int x,y,ab;
clrscr();
printf("RISHA");
printf("\nenter the  numbers:");
scanf("%d",&x);
printf("\nenter of  number:");
scanf("%d",&y);
ab=Add(x,y);
printf("Answer=%d",ab);
getch();
}