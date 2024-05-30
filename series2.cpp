#include<stdio.h>
int main()
{
  int n;
  float sum;
  printf("Enter the value of n:");
  scanf("%d",&n);
  sum=(2.0/3.0)*n*(n+1)*(2*n+1);
  printf("Sum of the series:%.2f\n",sum);
  return 0;

}
