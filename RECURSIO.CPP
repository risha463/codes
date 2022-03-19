#include<stdio.h>
#include<conio.h>
int sumofdigit(int n)
{
if(n==0)
return 0;
return(n%10+sumofdigit(n/10));
}
void main()
{
int num=12345;
int result=sumofdigit(num);
clrscr();
printf("sum of digit in % is %d\n",num,result);
getch();
}