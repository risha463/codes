#include<stdio.h>
#include<conio.h>
void main()
{
int n,arm=0,r,c;
clrscr();
printf("Risha\n");
printf("Enter any Number\n");
scanf("%d",&n);
c=n;
while(n>0)
{
r=n%10;
arm=(r*r*r)+arm;
n=n/10;
}
if(c==arm)
printf("Armstrong Number");
else
printf("Not");
getch();
}