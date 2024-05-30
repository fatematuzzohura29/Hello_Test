#include<stdio.h>
int main()
{
   int i,sum=0;
  // printf("Enter th evalue of n:");
  // scanf("%d",&n);

   for(i=100;i<=200;i++)
   {
   if(i %17==0)
   {
    sum=sum+i;

   }
   }
   printf("sum of numbers between 100 and 200 divisible by 17: %d\n",sum);
   return 0;

    }





