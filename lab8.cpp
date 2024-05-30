#include<stdio.h>
#include<math.h>
int main()
{
   float x,y;
   printf("Enter the value of x:");
   scanf("%f",&x);
   y=(x-1/x);
   printf("result is:%.2f\n", y+(y*y)/(2.0)+(y*y*y)/(3.0)+(y*y*y*y)/(4.0));
   return 0;

}
