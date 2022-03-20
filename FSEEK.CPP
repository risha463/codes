#include<stdio.h>
#include<conio.h>
void main()
{
char name[20];
int age,length;
FILE*fp;
fp=fopen("test.text","w");
fprintf(fp,"%s%d","Fresh2refresh",5);
length=ftell(fp);
rewind(fp);
fscanf(fp,"%d",&age);
fscanf(fp,"%s",name);
fclose(fp);
printf("name:%s\nage:%d\n",name,age);
printf("total number of character in file is %d",length);
getch();
}