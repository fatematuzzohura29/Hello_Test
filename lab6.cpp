#include<stdio.h>
int main()
{
   float x,y,z,total,average;
   printf("Enter the values of x,y and z:");
   scanf("%f%f%f",&x,&y,&z);
   total=x+y+z;
   average=(x+y+z)/3.0;
   printf("Total is=%.2f\n",total);
   printf("average is=%.2f\n",average);
   return 0;
}
