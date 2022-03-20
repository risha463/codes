#include<stdio.h>
#include<conio.h>
struct employee{
int id,age,salary;
char name[10];
}emp[100];
void main()
{
int i,n;
printf("enter the no of employees\n");
scanf("%d",&n);
printf("enter employee info as id,name,age,salary\n");
for(i=0;i<n;i++)
{
scanf("%d%s%d%d",&emp[i].name,&emp[i].age,&emp[i].salary);
}
printf("\nEMP_NAME\tEMP_\tEMP_AGE\t\tEMP_SAL\n");
for(i=0;i<n;i++)
{
printf("%d\t\t%s\t%d\t\t%d\n",emp[i].id,emp[i].age,emp[i].salary);
}
getch();
}