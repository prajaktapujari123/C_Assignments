#include<stdio.h>

int main()
{
 unsigned char c1,c2;
 signed char c3,c4;
int sum, sub,mul;
int sum1,sub1,mul1;

printf("Enter the two unsigned char\n");
scanf("%c %c",&c1,&c2);

 sum = ( c1 +  c2);
 sub=  (c1 - c2);
 mul= (c1 *  c2);


printf("sum=%hhu\n",sum);
printf("sub=%hhu\n",sub);
printf("mul=%hhu\n",mul);

 

printf("Enter the two signed char\n");
scanf("%c %c",&c3,&c4);

sum1 = ( c3 +  c4);
sub1=  (c3 - c4);
mul1= (c3 *  c4);


printf("sum1=%hhd\n",sum1);
printf("sub1=%hhd\n",sub1);
printf("mul1=%hhd\n",mul1);

return 0;
}

