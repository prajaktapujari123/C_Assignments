#include<stdio.h>
struct student
{

int rollno;
char name [15];
float marks;

};
typedef struct student stud_t;
int main (void)
{
stud_t s1;
printf("Enter the roll no:\n");
scanf("%d",&s1.rollno);

printf("Enter the name :\n");
scanf("%[^\n]s",&s1.name);

printf("Enter the marks:\n");
scanf("%f",&s1.marks);

printf("rollno=%d,name=%s,marks=%f\n",s1.rollno,s1.name,s1.marks);

return 0;
}
