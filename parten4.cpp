#include<stdio.h>
int main()
{
  int i,j,n;
  printf("Enter row and column number:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
     for(j=1;j<=n;j++)
     {
       if(i==1 || i==n  || i==j)
       printf("$");
       else
       printf("*");
     }
  printf("\n");
     }
return 0;
}
