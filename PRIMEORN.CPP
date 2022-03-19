#include<stdio.h>
#include<conio.h>
void main()
{
int n,count=0,i;
clrscr();
printf("RISHA\n");
printf("enter any number\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
count++;
}
if(count==2)
printf("Prime number");
else
printf("Not Prime number");
}
getch();
}
