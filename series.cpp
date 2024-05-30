#include<stdio.h>
int main()
{
  int n;
  float sum;
  printf("Enter the value of n:");
  scanf("%d",&n);
  sum=(n/3.0)*(4*n*n-1);
  printf("Sum of the series:%.2f\n",sum);
  return 0;

}
