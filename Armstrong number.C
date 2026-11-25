#include<stdio.h>
int main()
{
 int rev,r,n,sum=0, original;
 printf("Enter a number");
 scanf("%d*,&n);
 sum=original;
 while(n!=0)
{
 r=n%10;
 sum=sum+r*r*r;
 n=n/10;
}
 if(sum=original)
{
 printf("Armstrong number");
}
 else
{
 printf("Not Armstrong number")
return 0;
