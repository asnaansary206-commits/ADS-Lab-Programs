#include<stdio.h>
void main()
{
int a[10],n,i,key,f=0;
printf("enter number of element:\n");
scanf("%d",&n);
printf("enter element:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter element to be search:");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(a[i]==key)
{
f=1;
printf("element found at position %d",i+i); 
}
}
if(f==0)
printf("element is not found");
return ;
} 
