#include<stdio.h>
#include<math.h>
int main()

{

float a,b,c,s,area;
  printf("Enter the values of a ,b and c:");
  scanf("%f%f%f",&a,&b,&c);
  s=(a+b+c)/2.0;
    area=sqrt (s*(s-a)*(s-b)*(s-c));
  printf("Area of triangle is :%.2f\n",area);
  return 0;
}
