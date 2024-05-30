#include<stdio.h>
int main()
{

  int numrows;
  printf("How many rows of right traingle?\n");
  scanf("%d",&numrows);
  for(int rowno=1;rowno<=numrows;rowno++)
  {


  for(int colno=1;colno<=rowno;colno++)
  {
    for(int space=1;space<=(numrows-rowno);space++)
    {
    printf(" ");

    }
    for(int symbol=1;symbol<=rowno;symbol++)
    {
    printf("*");

    }
    printf("\n");
}
  return 0;
  }













}
