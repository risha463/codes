#include<stdio.h>
#include<conio.h>
void main()
{
int m,n,i,j,matrix[10][10],transpose[10][10];clrscr();
printf("enter rows and columns:\n");
scanf("%d%d",&m,&n);
printf("enter elements of the matrix\n");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&matrix[i][j]);
for(i=0;i<m;i++)
for(j=0;j<n;j++)
transpose[j][i]=matrix[i][j];
printf("transpose of the matrix:\n");
for(i=0;i<n;i++){
for(j=0;j<m;j++)
printf("%d\t",transpose[i][j]);
printf("\n");
}
getch();
}