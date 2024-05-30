#include<stdio.h>
#include<math.h>
int main()
{
  float x,y,h;
  printf("Enter the value of x and y:");
  scanf("%f%f",&x,&y);
  h=sqrt(x*x+y*y);
  printf("Hypotenuse is =%.2f\n",h);
return 0;


}
