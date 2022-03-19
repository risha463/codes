#include<stdio.h>
#include<conio.h>
void swap(int*a,int*b);
void main(){
clrscr();
int a=4,b=3;
printf("RISHA");
printf("the values before callby refrence is%d and %d\n",a,b);
swap(&a,&b);
printf("the values after call by refrence is %d and %d",a,b);
getch();
}
void swap(int*a,
int*b){
int temp;
temp=*a;
*a=*b;
*b=temp;
}