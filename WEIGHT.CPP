#include<stdio.h>
#include<conio.h>
void main(){
int age,weight;
printf("Risha");
printf("enter the age\n");
scanf("%d",&age);
printf("enter weight");
scanf("%d",&weight);
do{
if(age>=25||weight>=50)
{
printf("the condition is false");
}
else
{
printf("the condition is true");}
}
while(age<=25&&weight<=50);
getch();
}