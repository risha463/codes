#include<stdio.h>
#include<conio.h>
int sum(int a, int b)
{
int c;
c=a+b;
return(c);
}
void main()
{
int a,b,c;
clrscr();
printf("RISHA");
printf("Enter a and b:");
scanf("%d%d",&a,&b);
c=sum(a,b);
printf("Sum %d",c);
getch();
}
