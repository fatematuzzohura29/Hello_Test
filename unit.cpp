#include<stdio.h>
int main()
{
   int units;
   float total ,surcharge=0;
   printf("Enter the value of units consumed:");
   scanf("%d",&units);
   if(units<=200)
{

  total =units*0.8;

}
else if(units<=300)
{
total =200*0.8+(units-200)*0.9;
}
else
{
total =200*0.8+100*0.9+(units-300)*1.00;
}
total +=100;
if(surcharge<400)
{
surcharge=0.15*total ;

total +=surcharge;
}
printf("Estimated charges:%0.2f\n",total );
return 0;

}
