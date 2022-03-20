#include<stdio.h>
#include<conio.h>
void main(){
int sec,hr=0,min;
clrscr();
printf("\n enter seconds:");
scanf("%d",&sec);
min=sec/60;
sec=sec%60;
if(min>=60)
{
hr=min/60;
min=min%60;
}
if(hr!=0)
{
printf("\n No of minutes:%d",hr);
printf("\n No of seconds:%d",min);
}
getch();
}