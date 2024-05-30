#include<stdio.h>
int main()
{
  int n,i,j;
  printf("How many rows of square?\n");
  scanf("%d",&n);

  for(i=1;i<=n;i++)//outer loop
  {
     for(j=1;j<=n;j++)//inner loop

       printf("*");
       printf("\n");
  }
  return 0;

  }












