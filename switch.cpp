#include<stdio.h>
int main()
{
  int x;
  printf("Enter the value of x:");
  scanf("%d",&x);
  switch(x)
  {
     case 1:printf("one");
            break;
     case 2:printf("Two");
             break;
      case 3:printf("Three") ;
            break;

      default:printf("Not in the range of 1-3");
  }

return 0;




}
