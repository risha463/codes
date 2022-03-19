#include<stdio.h>
#include<conio.h>
void main()
{
int a=76;
int*ptr=&a;
printf("RISHA");
printf("value of %d\n",a);
printf("address of a %x\n",ptr);
printf("address of a %p\n",ptr);
printf("adress of a %x\n",*ptr);
printf("adress of a %x\n",&a);
printf("adress of a %x\n",&ptr);
getch();
}