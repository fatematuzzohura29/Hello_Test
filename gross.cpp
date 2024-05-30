#include<stdio.h>
int main()
{
   float hours,rate,gross,net,bonus,tax;
   printf("Enter hours worked and hourly rate :");
   scanf("%f%f",&hours,&rate);
   gross=hours*rate;
   bonus=.07*gross;
   tax=.05*gross;
   net=gross+bonus-tax;
    printf("The gross pay is:%.2f\n",gross);
    printf("The bonus pay is:%.2f\n",bonus);
    printf("The tax pay is:%.2f\n",tax);
    printf("The net pay is:%.2f\n",net);
    return 0;


}








