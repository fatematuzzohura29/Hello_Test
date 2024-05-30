#include<stdio.h>
int main()
{
   float c,f;
   printf("Enter value of farenheit:");
   scanf("%f",&f);
   c=(5.0/9.0)*(f-32);
   printf("celsius value=%.2f\n",c);
   return 0;

}
