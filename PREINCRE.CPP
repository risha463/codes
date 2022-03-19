#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d;
printf("Risha");
printf("\n enter first number");
scanf("\n %d",&a);
a++;
printf("value after post increament=%d",a);
printf("\n enter second number");
scanf("\n %d",b);
b--;
printf("\n value after pre increament=%d",b);
printf("\n enter third number");
scanf("\n %d",&c);
++c;
printf("\n value after pre increment=%d",c);
printf("\n enter fourth number");
scanf("\n %d",&d);
--d;
printf("\n value after pre decrement=%d",d);
getch();
}