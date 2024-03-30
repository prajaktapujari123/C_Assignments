#include<stdio.h>
int main()
{
int num,a,b,c,d;


printf("Enter a 4 digit number:");
scanf("%d",&num);
a=num%10;
b=(num/10)%10;
c=(num/100)%10;
d=(num/1000)%10;
printf("%d  %d  %d  %d\n",d,c,b,a);
printf("%d=%d+%d+%d+%d\n",num,d*1000,c*100,b*10,a*1);
printf("%d\n",a*1000+b*100+c*10+d*1);

return 0;
}
