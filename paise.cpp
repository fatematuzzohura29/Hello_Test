#include<stdio.h>
#include<math.h>

int main()
{
   float decimal;
   int paise;
   printf("Enter the value of price in decimal:");
   scanf("%f",&decimal);
   paise=decimal*100;
   printf("Price in paise:%d\n",paise);
   return 0;

}
