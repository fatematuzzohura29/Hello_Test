#include<stdio.h>
int main()
{
   float gross,re,hou,hea,tran,net;
   printf("Gross Amount:");
   scanf("%f",&gross);
   re=-.05*gross;
   hou=+.2*gross;
   hea=-750;
   tran=+200;
   net=gross+re+hea+hou+tran;
   printf("********************************\n");
   printf("\nRetirement plan:  %.2fAED\n",re);
   printf("\nHealth Insurance:  %.2fAED \n",hea);
   printf("\nHousing Allowence: %.2fAED\n",hou);
   printf("\nTransportation Allowence:  %.2fAED\n",tran);
   printf("************************************\n");
   printf("\n Net salary:   %.2fAED\n",net);
   return 0;









}
