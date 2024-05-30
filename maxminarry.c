#include<stdio.h>
int main()
{
    int data[5];
    int i,n,max,min;
    printf("Enter number of element:");
    scanf("%d",&n);
    printf("Enter %d elements of the array:");
    for(i=0;i<n;i++)//array input
    {
      scanf("%d",&data[i]);

    }

    max=data[0];
    min=data[0];
    for(i=0;i<n;i++)
    {
    if(data[i]>max)//max value check
        max=data[i];

    if(data[i]<min)//min value check
        min=data[i];

    }

   printf("Maximum element:%d\n",max);
   printf("Minimum element :%d\n",min);
   return 0;
}
