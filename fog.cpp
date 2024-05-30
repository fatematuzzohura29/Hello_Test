#include<stdio.h>
#include<math.h>

int main()
{
  float x;
  printf("Enter the value of x:");
  scanf("%f",&x);
   float fx=4*pow(x,x)+2*sqrt(x)-3;
float fogx=7*pow(fx,1)-6;
  printf("The fog(%.2f)=%.2f\n",x,fogx);
  return 0;

}
