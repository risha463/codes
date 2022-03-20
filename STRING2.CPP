#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void main(){
char str1[20],str2[20];
int ch,i,j;
do
{
printf("\ntMENU");
printf("\--------------\n");
printf("1:find length of string");
printf("\n2:find reverse of string");
printf("\n3:concantenate strings");
printf("\n4:copy string");
printf("\n5:compare string");
printf("\n6:exit");
printf("\n---------------\n");
printf("\nenter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("enter string:");
scanf("%s",str1);
i=strlen(str1);
printf("length of string:%d\n\n",i);
break;
case 2:
printf("enterstring:");
scanf("%s",str1);
printf("reverse string:%s\n\n",str1);
break;
case 3:
printf("\nenter first string:");
scanf("%s",str1);
printf("string after concatenation:%s\n\n",str1);
break;
case 4:
printf("enter a string1:");
scanf("%s",str1);
printf("enter a string2:");
scanf("%s",str2);
printf("\nstring before copied:\"%s\",string2=\"%s\"\n",str1,str2);
strcpy(str2,str1);
printf("--------------------\n");
printf("\we are copying string String1 to String2\"n");
printf("------------------\n");
break;
default:
printf("invalid input please enter valid input.\n\n");
}
}while(ch!=6);
getch();
}