#include<stdio.h>
int factorial(int n);
int main()
{
int num,fact;
printf("enter the no:");
scanf("%d",&num);
fact=factorial(num);
printf("factorial of %d is %d",num,fact);
return 0;
}
int factorial(int n)
{
int re;
if(n==1||n==0)
{
return 1;
}
else
{
re=n*factorial(n-2);
return re;
}
}
