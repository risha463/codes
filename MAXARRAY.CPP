#include<stdio.h>
#include<conio.h>
void main()
{
int ary[5],i,max=0;
clrscr();
printf("RISHA");
printf("enter the five elements of array:");
for(i=0;i<5;i++)
{
scanf("%d",&ary[i]);
}
for(i=0;i<5;i++)
{
if(max<ary[i])
{
max=ary[i];
}
}
printf("maximam value is %d",max);
getch();
}