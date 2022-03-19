#include<stdio.h>
#include<conio.h>
void main()
{
int a[6],sum=0,i;
clrscr();
printf("RISHA\n");
printf("enter array");
for(i=0;i<=5;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=5;i++)
{
sum=sum+a[i];
}
printf("the sum of array elements is %d",sum);
getch();
}