#include<stdio.h>
int main()
{
  int marks;
  printf("Enter a student's marks:");
  scanf("%d",&marks);
  if(marks>=80)
  {
  printf("Your grade :Distinction\n");
  }
  else if(marks>=70)
  {
    printf("Your grade :very good\n");

  }
else if("marks>=60")
{
 printf("Your grade :pass");

}
else
{
 printf("Your grade :Fail");

}
return 0;

}
