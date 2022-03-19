#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int num,c=0,i=1;
printf("RISHA");
printf("enter the numbers=:");
scanf("%d",&num);
do
{if(num%i==0)
{c++;}
i++;
}
while(i<=num);
if(c==2)
printf("number is prime");
else
printf("number is not prime");
getch();
}