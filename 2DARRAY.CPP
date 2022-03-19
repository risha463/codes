#include<stdio.h>
#include<conio.h>
void main()
{clrscr();
int a[2][2],i,j;
printf("RISHA\n");
printf("enter array elements");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{scanf("%d",&a[i][j]);}
}
printf("matrix elements:\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%d",a[i][j]);}
printf("\n");
}
getch();
}

