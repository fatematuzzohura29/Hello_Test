#include<stdio.h>
int main()
{
   float fixedsalary,finalsalary,totalsales,bonus,tax;
   printf("Enter the fixed salary and total sales:");
   scanf("%f%f",&fixedsalary,&totalsales);
   bonus=.15*totalsales;
   tax=.12*fixedsalary;
   finalsalary=fixedsalary+bonus-tax;
   printf("The final salary is:%.2f\n",finalsalary);
  return 0;
   }
