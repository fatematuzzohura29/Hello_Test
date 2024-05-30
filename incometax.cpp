#include<stdio.h>
int main()
{
   int income;
   float Duetax;
   printf("Enter income:$");
   scanf("%d",&income);
    if( income<=  750)
   {
     Duetax=.01*750;
   }
  else if(income>=750&& income<=2250)
  {
  Duetax=7.50+(.02*750);
  }
else if(income>= 2250&&income<=3750)
{
  Duetax=37.50+(.03*2250);

}
else if(income>=3750&&income<=5250)
{
  Duetax=82.50+(0.04*3750);
}
else if (income>= 5250&&income<=7000)
{
 Duetax=142.50+(0.05*5250);
}
else
{
  Duetax=230.00+(.06*7000);
}
printf("The due tax is :$%.2f\n",Duetax);
return 0;
}
