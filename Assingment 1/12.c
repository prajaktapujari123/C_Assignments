#include<stdio.h>
#include<limits.h>
#include<float.h>
int main()
{

printf("____________________________________________________________________\n");


printf("Data Type\tSize\tFormatSpecifier\t Range\n");

printf("_____________________________________________________________________\n");

printf("char\t\t%d\t\t%%c\t%dto%d\t\t\n",sizeof(char),SCHAR_MIN,SCHAR_MAX);
printf("unsigned char\t%d\t\t%%c\t%dto%d\t\n",sizeof(unsigned char),UCHAR_MAX);
printf("short int\t%d\t\t%%hd\t%dto%d\t\n",sizeof(short int),SHRT_MIN,SHRT_MAX);
printf("Unsigned\n short int\t%d\t\t%%hu\t%dto%d\t\n",sizeof(unsigned short int),USHRT_MAX);
printf("int\t\t%d\t\t%%d\t\%dto%d\t\n",sizeof(int),INT_MIN,INT_MAX);
printf("Unsigned int\t%d\t\t%%u\t\t%dto%d\t\n",sizeof(unsigned int),UINT_MAX);
printf("long int\t%d\t\t%%ld\t\t%dto%d\t\n",sizeof(long int),LONG_MIN,LONG_MAX);
printf("unsigned\nlong int\t%d\t\t%%lu\t\t%dto%d\t\n",sizeof(unsigned long int),ULONG_MAX);
printf("float\t\t%d\t\t%%f\t\t%lfto%lf\t\n",sizeof(float),FLT_MIN,FLT_MAX);
printf("double\t%d\t%%f\t%lfto%lf\n",sizeof(double),DBL_MIN,DBL_MAX);
printf("long double\t%d\t%%f\t%lfto%lf\t\n",sizeof(long double),LDBL_MIN,LDBL_MAX);

return 0;

}
