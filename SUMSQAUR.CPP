#include<stdio.h>
#include<conio.h>
void main()
{
int a=1,num,sum=0;
printf("enter num:");
scanf("%d",&num);
do
{
printf("%d,sqaure=%d\n",a,a*a);
sum+=a;
a++;
}
while(a<=num);
printf("sum of digit=%d",sum);
getch();
}