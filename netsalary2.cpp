#include<stdio.h>
int main()
{
   float net,gross,fe,st,re,he;
   printf("Gross Amount:");
   scanf("%f",&gross);
   fe=.15*gross;
   st=.035*gross;
   re=.05*gross;
   he=750;
   net=gross-fe-st-re-he;
   printf("\nFederal Income Tax:    %.2fdirhams\n",fe);
   printf("\nstate Tax:             %.2fdirhams\n",st);
   printf("\nRetirement plan:       %.2fdirhams\n",re);
   printf("\nHealth Insurance:      %.2fdirhams\n",he);
   printf("\nNet salary:            %.2fdirhams\n",net);

   return 0;


}
