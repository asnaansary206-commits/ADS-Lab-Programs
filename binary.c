#include<stdio.h>
int main()
{
int A[5]={1,0,10,1};
int B[5]={1,1,0,0,1};
int i;
printf("set A:");
for(i=0;i<5;i++)
printf("%d",A[i]);
printf("\n set D:");
for(i=0;i<5;i++)
printf("%d",B[i]);
printf("\n union:");
for(i=0;i<5;i++)
printf("%d",A[i]||B[i]);
printf("\n difference(A-D):");
for(i=0;i<5;i++)
printf("%d",A[i]&B[i]);
return 0;
}
