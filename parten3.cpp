#include<stdio.h>
int main()
{
  int i,j,n;
  printf("Enter rows and column number:");
  scanf("%d",&n);

  for(i=1;i<=n;i++)
  {
  for(j=1;j<=n;j++)
  {

    if(i==j)
    printf("$");
    else
    printf("*");

  }
printf("\n");
}
return 0;

}
