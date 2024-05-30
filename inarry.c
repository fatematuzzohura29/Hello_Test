#include<stdio.h>
#include<stdlib.h>
int main()
{
 int i, j, N, k=51 , LA[101],  ITEM=106;
 N=100;
 j=N;
 for(i=0;i<100;i++)

 LA[i]=rand()%1000;

 while(j>=k)
 {
  LA[j+1]=LA[j];
  j=j-1;
 }
 LA[k]=ITEM;
 N=N+1;
 printf("ITEM %d  inserted at position :%d\n", LA[k],k);

}
