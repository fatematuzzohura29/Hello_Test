#include<stdio.h>
int main()
{
   int data[5],i,n,sum=0;
   float mean;
   printf("Enter number of elements:");
   scanf("%d",&n);
   printf("Elements of array:");
   for(i=0;i<n;i++)//arry input
   {
    scanf("%d",&data[i]);

   }

  for(i=0;i<n;i++)
  {
    sum=sum+data[i];//sum
    mean=sum/n;//mean value

  }
printf("Mean:%.2f\n",mean);
return 0;
}
