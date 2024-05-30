#include<stdio.h>
int main()
{
   float r,a,s;
   printf("Enter value of radius:");
   scanf("%f",&r);
   a=3.14*r*r;
   s=2*3.14*r;
   printf("Area of circle:%.2f\n",a);
   printf("Circumferences of circle:%.2f\n",s);
   return 0;
}
