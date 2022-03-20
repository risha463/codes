#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(int argc, char *argv[]){
if(argc!=3) printf("wrong!!!!!!!!!");
else
if(argv[1]=="-s")
printf("girls");
else if(argv[1]== "-k")
printf("boys");
else
printf("OMG!!");
getch();
}