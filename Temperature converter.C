#include<stdio.h>
int main()
{
  int choice;
  float C,F;
  printf("Temperature converter\n");
  printf("1. Celsius to fahrenheit\n");
  printf("2. Fahrenheit to celsius\n");
  printf("Enter your choice: ");
  scanf("%d", &choice);
  if (choice==1)
  {
    printf("Enter temperature in celsius:"); 
    scanf("%f", &C);
    F=(C*9/5)+32;
    printf("Temperature in fahrenheit=%.2f", F);
  }
  else if (choice==2)
  {
    printf("Enter temperature in Celsius:");
    scanf("%f", &F);
    C=(F-32)*5/9;
    printf("Temperature in fahrenheit=%.2f", C);
  }
  else
   {
     printf("Invalid choice");
    }
  return 0;
   }