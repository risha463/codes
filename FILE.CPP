#include<stdio.h>
#include<conio.h>
void main(){
FILE *f1,*f2,*f3;
int number,i;
printf("RISHA");
printf("contents of datafile\n\n");
f1=fopen("DATA","w");
for(i=1;i<=30;i++)
{
scanf("%d",&number);
if(number== -1)break;
putw(number,f1);
}
fclose(f1);
f1=fopen("DATA","r");
f2=fopen("odd","w");
f3=fopen("even","w");
printf("n\ncontent of even file\n\n");
while((number =getw(f3)) !=EOF)
printf("%4d",number);
fclose(f2);
fclose(f3);
getch();
}