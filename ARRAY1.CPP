#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i;
clrscr();
printf("RISHA\n");
printf("Enter Array Elements:");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
printf("\nArray Elements:");
for(i=0;i<5;i++)
{
printf("%d",a[i]);
}
getch();
}