#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a,n,sum=0;
clrscr();
printf("RISHA\n");
printf("enter the value of n:");
scanf("%d",&n);
for(a=1;a<=n;a++)
{
if(a%3!=0)
{
printf("%d",a);
sum+=a;
}
printf("sum=%2d",sum);
}
getch();
}