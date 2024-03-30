#include<stdio.h>
int main()

{

int a,b;
float c;
printf("Enter the values of a and b:");
scanf("%d%d",&a,&b);
if (b==0)
printf("Division by zero is not possible\n");
else
c=a/b;
printf("Dividion=%f\n",c);

return 0;




}
