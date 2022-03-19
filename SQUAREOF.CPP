#include<stdio.h>
#include<conio.h>
void main()
{int num,n;
clrscr();
printf("RISHA");
printf("\n enter the num=");
scanf("\n %d",&num);
for(n=1;n<=num;n++)
printf("\n %d",n);
printf("\n sqaure:");
for(n=1;n<num;n++)
{
printf("\n %d",n*n);
}
getch();
}