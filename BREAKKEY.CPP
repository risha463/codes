#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a=0;
printf("RISHA");
printf("enter the value of a:");
scanf("%d",&a);
while(a>10)
{
printf("value of is%d\n",a);
if(a==5)
break;
a++;
}
getch();
}