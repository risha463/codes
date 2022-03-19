#include<stdio.h>
#include<conio.h>
void swap(int *p,int *q)
{
int temp;
clrscr();
temp=*p;
*p=*q;
*q=temp;
printf("RISJHA\n");
printf("p=%d q=%d\n",*p,*q);
}
void main()
{
int a=100,b=200;
swap(&a,&b);
printf("a=%d b=%d",a,b);
getch();
}