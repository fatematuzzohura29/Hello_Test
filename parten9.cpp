#include<stdio.h>
int main()
{
   int n,i,j;
   printf("Enter number:\n");
   scanf("%d",&n);

   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
          if(j==n-1 || j==n-i -1)
          printf("#");
      else
      printf("*");

   }
   printf("\n");
}
return 0;
}
