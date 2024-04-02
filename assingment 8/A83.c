#include<stdio.h>
 #include<stdlib.h>
 typedef struct student
 {
int rollno;
char name[20];
float marks;
 }stud_t;

 void accept_stud(stud_t *s);
 void print_stud(stud_t *s);


int main(void)
{
stud_t *ptr=(stud_t *)malloc(sizeof(stud_t));
accept_stud(ptr);
print_stud(ptr);
free(ptr);
return 0;


}
void accept_stud(stud_t *s)
{
printf("Enter the details of student:(rollno,name,marks)\n");
scanf("%d %s %f",&s->rollno,s->name,&s->marks);
}

void print_stud(stud_t *s)
{
printf("rollno=%d,name=%s,marks=%f",s->rollno,s->name,s->marks);

}
