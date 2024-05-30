#include<stdio.h>
int main()
{
   int twodigitnumber,reversenumber;
   printf("Enter a two -digit number:");
   scanf("%d",&twodigitnumber);


   if(twodigitnumber>=01&&twodigitnumber<=99)
   {
   reversenumber=(twodigitnumber%10)*10+(twodigitnumber/10);

   printf("The reverse is:%d",reversenumber);
   }
  else{

  printf("Please inter a two-digitnumber");
  }
return 0;
}
