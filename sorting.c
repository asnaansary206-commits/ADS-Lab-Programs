#include<stdio.h>
void sort(int s[],int n)
{
int temp,i,j;
for(i=0;i<n;i++)
{
  for(j=0;j<n-i-1;i++)
   {
if(s[j]>s[j+1])
{
temp=s[j];
s[j]=s[j+1];
s[j+1]=temp;
}
}
}
}
int main()
{
int n,i;
int s[50];
printf("enter the number of elements:");
scanf("%d",&n);
printf("enter %d elements:\n",n);
for(i=0;i<n;i++)
{
scanf("%d",&s[i]);
}
sort(s,n);
printf("sorted array:\n");
for(i=0;i<n;i++)
{
  printf("%d\n",s[i]);
}
  return 0;
  }
  
