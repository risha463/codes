#include<stdio.h>
#include<conio.h>
void main(){
int num1,num2,num3;
printf("enter the number1=");
scanf("%d",&num1);
printf("\nenter the number2=");
scanf("%d",&num2);
printf("\n enter the number3=");
scanf("%d",&num3);
if(num1>num3)
{
if(num1>num3){
printf("\nlargest number=%d\n",num1);
}
else
{
printf("\n largest number=%d\n",num3);}
}
else if (num2>num3)
{
printf("\n largest number=%d\n",num2);
}
else
{
printf("\n largest number =%d\n",num3);
}
getch();
}