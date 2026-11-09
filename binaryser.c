#include<stdio.h>
int binary_search(int a[],int low,int high,int key)
{
int mid;
if(low>high)
{
printf("key not found");
return-1;
}
mid=(low+high)/2;
if(a[mid]==key)
return mid;
else if(a[mid]<key)
return binary_search(a,mid+1,high,key);
else
return binary_search(a,low,mid-1,key);
}
int main()
{
int a[100],n,key,pos;
printf("enter n:");
scanf("%d",&n);
printf("enter %d sorted element:",n);
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter key to search");
scanf("%d",&key);
pos=binary_search(a,0,n-1,key);
if(pos!=-1)
printf("key found at position %d",pos+1);
return 0;
}
