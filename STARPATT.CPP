#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,rows;
clrscr();
printf("RISHA\n");
printf("Enter Diamond rows\n=");
scanf("%d",&rows);
printf("Diamond star pattern\n");
for(i=1;i<=rows;i++){
for(j=1;j<=rows-i;j++){
printf(" ");
}
for(j=1;j<=i * 2-1;j++){
printf("*");
}
printf("\n");
}
for(i=rows-1;i>0;i--){
for(j=1;j<=rows-i;j++){
}
for(j=1;j<=i * 2-1;j++){
printf("*");
}
printf("\n");
}
getch();
}