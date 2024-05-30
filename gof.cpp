#include<stdio.h>
#include<math.h>
int main()
{
   float x;
   printf("Enter the value of x:");
   scanf("%f",&x);
   float fx=3*pow(x,4)+2*sqrt(x)-2;
   float gofx=5*pow(fx,3)-4;
   printf("gof(%.2f)=%.2f\n",x,gofx);
   return 0;







}
