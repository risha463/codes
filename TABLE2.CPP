#include<stdio.h>
#include<conio.h>
void main()
{
int num,i;
clrscr();
printf("RISHA\n");
printf("Enter the value:");
scanf("%d",&num);
for(i=1;i<=10;i++)
{
printf("%d*%d=%d\n",num,i,num*i);
}
getch();
}