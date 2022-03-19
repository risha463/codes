#include<stdio.h>
#include<conio.h>
void main()
{
int line,row,col,value=0;
clrscr();
printf("RISHA\n");
printf("enter the no of lines\n");
scanf("%d",&line);
for(row=1;row<=line;row++)
{
for(col=1;col<=row;col++)
{
value++;
printf("%5d",value);
}
printf("\n");
}
getch();
}