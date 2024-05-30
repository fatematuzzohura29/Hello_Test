#include<stdio.h>
int main()
{

   int i,sum=0;

   for(i=101;i<=199;i++)

   {
         if(i%7==0)
   {
       sum=sum+i;
    }

    }

   printf("sum of number greater than 100 and less than 200 divisible by 7: %d\n",sum);
   return 0;
}
