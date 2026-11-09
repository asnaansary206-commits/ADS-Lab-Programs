#include<stdio.h>
void mergesortedarrays(int arr1[],int size1,int arr2[],int size2,int merged[])
{
int i=0;
int j=0;
int k=0;
while(i<size1&&j<size2)
{
if (arr1[i]<=arr2[j])
{
merged[k]=arr1[i];
i++;
}else{
merged[k]=arr2[j];
j++;
}
k++;
}
while(i<size1)
{
merged[k]=arr1[i];
i++;
k++;
}
while(j<size2)
{
merged[k]=arr2[j];
j++;
k++;
}
}
int main()
{
int array1[]={1,3,5,7,9};
int array2[]={2,4,6,8,10};
int size1=sizeof(array1)/sizeof(array1[0]);
int size2=sizeof(array2)/sizeof(array2[0]);
int merged[size1+size2];
mergesortedarrays(array1,size1,array2,size2,merged);
printf("merged sorted array:\n");
for(int i=0;i<size1+size2;i++)
{
printf(" %d ",merged[i]);
}
printf("\n");
return 0;
}
