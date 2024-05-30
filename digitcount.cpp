#include<stdio.h>
int main()
{
int num,digitcount=0;
printf("Enter a digit:");
scanf("%d",&num);
if(num==0)
{
printf("digitcount=1");
}
else
{
  while(num>0)
  {
       num=num/10;
       digitcount++;

  }

printf("The num  has :%d digits\n",digitcount);
}
return 0;

}
