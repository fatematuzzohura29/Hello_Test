#include<stdio.h>
int main()
{
  float inch,cm;
  printf("Enter value of inch:");
  scanf("%f",&inch);

  cm=2.54*inch;
  printf("Cm scale:%.2f\n",cm);
  return 0;

}
