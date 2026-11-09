#include<st 6  dio.h>
void main()
{
int num1,num2,num3;
printf("enter three number");
scanf("%d%d%d",&num1,&num2,&num3);
if(num1>num2)
{
if(num1>num3)
{
printf("%d is greater",num1);
}
else
printf("%d is greater",num3);
}
else if(num2>num3)
printf("%d is greater",num2);
else
printf("%d is greater",num3);
}

