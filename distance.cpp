#include<stdio.h>
#include<math.h>
int main()
{
   float x1,x2,y1,y2,D;
   printf("Enter the values of x1,x2,y1 and y2:");
   scanf("%f%f%f%f",&x1,&x2,&y1,&y2);
   D=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
   printf("Distance is :%.2f\n",D);
   return 0;

}
