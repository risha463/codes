#include<stdio.h>
#include<conio.h>
void main(){
int number=50;
int *p;
int **p2;
p=&number;
p2=&p;
printf("adress of number variable is %x\n",&number);
printf("RISHA");
printf("address of p variable is %x\n",p);
printf("value of *p variable is %d\n",*p);
printf("address of p2 variable is %x\n",p2);
printf("value of *p2 variable is %d\n",p);
getch();
}