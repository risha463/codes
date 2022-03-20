#include<stdio.h>
#include<conio.h>
void main(){
int no1,no2,*ptr1,*ptr2,result;
clrscr();
printf("risha");
printf("enter no1:");
scanf("%d",&no1);
printf("\nenter no2:");scanf("%d",&no2);
ptr1=&no1;
ptr2=&no2;
result=*ptr1+*ptr2;
printf("\n addition=%d",result);
result=*ptr1-*ptr2;
printf("\n subtraction=%d",result);
result=*ptr1**ptr2;
printf("\n multiplicatin=%d",result);
result=*ptr1/(*ptr2);
printf("\n division=%d",result);
getch();
}