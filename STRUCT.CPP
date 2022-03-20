#include<stdio.h>
#include<conio.h>
void main(){
struct student{
char name[30];
int rollno;
}stud;
printf("RISHA");
scanf("%d",&stud.rollno);
printf("\nenter your name:");
scanf("%s",stud.name);
printf("\nrollno:%d\n name:%s",stud.rollno,stud.name);
getch();
}