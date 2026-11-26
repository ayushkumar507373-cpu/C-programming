#include<stdio.h>
int main()
{
int n,i,max;
printf("Enter number in array");
scanf("%d",&n);
int arr[n];
printf("Enter array elements");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
max=are[0];
for(i=1;i<n;i++)
{
if(arr[i]>max)
{
max=arr[i];
}
}
printf("Max element in array=%d",max);
return 0;
}
