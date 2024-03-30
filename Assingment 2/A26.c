#include<stdio.h>
int main()
{

int n,reverse=0,remainder,original;
original=n;
printf("Enter a number:");
scanf("%d",&n);

while(n!=0)
{
remainder=n%10;
reverse=reverse*10+remainder;
n/=10;
}

if(reverse==original)
{
printf("%d the number is palindrome:",original);
}
else
printf("%d the number is not palindrome:",original);

return 0;

}
