#include<stdio.h>
int main()
{
   int i,n,j;
   printf("How many rows of right triangle?\n");
   scanf("%d",&n);

   for(i=1;i<=n;i++)
   {
       for(j=1;j<=i;j++)

       {

       printf("*");

       }


    printf("\n");
}

return 0;
}
