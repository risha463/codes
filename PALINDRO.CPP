#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int n,c,s=0,r;
printf("RISHA");
printf("enter any number");
scanf("%d",&n);
c=n;
while(n>0)
{
r=n%10;
s=r+(s*10);
n=n/10;
}
if(c==s)
{printf("palindrome number");}
else
{printf("not palindrome");}
getch();
}