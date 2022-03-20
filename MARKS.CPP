#include<stdio.h>
#include<conio.h>
void main(){
int a[10],i,s=0;
float avg;
clrscr();
printf("RISHA");
printf("enter 10 values");
for(i=0;i<10;i++){
scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
{
s=s+a[i];
}
printf("sum is %d",s);
avg=s/10;
printf("\naverage is %f",avg);
getch();
}