#include <stdio.h>
#include <stdlib.h>
struct student{
int rollno;
char name[20];
float marks[5];
};
int main()
{
int i,j,sum=0,max=0,count=0,roll=0,name=0;
struct student s[10];
for (i=0;i<3;i++)
{
printf("\n Enter the roll no. : ");
scanf("%d",&s[i].rollno);
printf("\n Enter the name : ");
scanf("%s",s[i].name);
printf("\n enter the marks : ");
for(j=0;j<3;j++)
{
scanf("%f",&s[i].marks[j]);
}
}

for(i=0;i<3;i++)
{
sum=0;
for(j=0;j<5;j++)
{
sum += s[i].marks[j];
}
if (max<sum)
{
max=sum;
}
}
for(i=0;i<10;i++)
{
sum=0;
for(j=0;j<5;j++)
{
sum += s[i].marks[j];
}
if(max==sum)
{
printf("------STUDENT WITH HIGHEST TOTAL------");
printf("\nStudents name: %s \n",s[i].name);
printf("Roll no. : %d \n",s[i].rollno);
printf("\n the marks are \n :");
for(j=0;j<3;j++)
{
printf("%f ",s[i].marks[j]);
}
}
}
}
