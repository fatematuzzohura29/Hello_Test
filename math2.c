#include<stdio.h>
#include<math.h>
int main()
{
  float a,b,c,d,m,t;
  printf("Enter the value of a,b,c and d:");
  scanf("%f%f%f%f",&a,&b,&c,&d);
  t=sqrt(a-b)/(c+d);

m=sqrt(pow(a-b,2)/pow(c+4*d,2))+sqrt(t);
  printf("The value of m is :%.2f\n",m);
  return 0;


}
