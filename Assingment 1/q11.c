#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c;
float peri,s,area,a1;

printf("Enter the values of sides:");
scanf("%d %d %d",&a,&b,&c);
printf("Perimeter of triangle=%f",peri=a+b+c);
printf("value of s=%f\n",s=peri/2);
printf("value of a1=%f\n",a1 = s * (s-a) * (s-b) * (s-c));
printf("area of triangle=%lf\n",area = sqrt(a1));

return 0;




}
