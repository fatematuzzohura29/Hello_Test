#include<stdio.h>
int main()
{
   int v,p,T;
   float m;
   printf("Enter the value of v,p and T:");
    scanf("%d%d%d",&v,&p,&T);
m=(p*v)/(0.37*758);
printf("Mass of the air is:%.2f\n",m);
return 0;

}
