#include<stdio.h>
int main()
{
   int i,n,sum=0;
   printf("Enter a value of n:");
   scanf("%d",&n);

   for(i=2;i<=n;i=i+2)
   {


   sum=sum+i;
   }



      printf("The sum of the following even series 2 to %d is: %d\n",n,sum);
return 0;
}
