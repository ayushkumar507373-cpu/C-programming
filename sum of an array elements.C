#include<stdio.h>
int main()
{
 int n,i,sum=0;
 printf("Enter number in array: ");
 scanf("%d",&n);
 int arr[n];
 printf("Enter array elements: ");
for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
for(i=0;i<n;i++)
 {
  sum=sum+arr[i];
 }
printf("sum of array=%d",sum);
return 0;
}