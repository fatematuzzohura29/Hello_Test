#include<stdio.h>
int main()
{
   int data [5];
   printf("Store values in an array(5integers):");

    for(int i=0;i<5;i++)
    {
      scanf("%d",&data[i]);//storing value in an arry

    }
   printf("printf storage value:");

   for(int i=0;i<5;i++)
   {

    printf("%d\n",data[i]);//printing value of an arry

   }
   return 0;
   }






