#include<stdio.h>
#include<math.h>
int main()
{
  float x,m,t;
  printf("Enter the value of x and t:");
  scanf("%f%f",&x,&t);
m=sqrt((24*t-10*t)/(sqrt(x*t)+100))+pow((3*t)/(6*pow(t,2)),2);
  printf("The value of m is:%.2f\n",m);
  return 0;






}
