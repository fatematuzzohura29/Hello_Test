#include<stdio.h>
#include<math.h>
int main()
{
   float r,v,a;
   printf("Enter the value of radius:");
   scanf("%f",&r);
   v=(4.0/3.0)*3.14*r*r*r;
   a=4.0*3.14*r*r;
   printf("Volume=%.2f\n",v);
   printf("Area=%.2f\n",a);
   return 0;
}
