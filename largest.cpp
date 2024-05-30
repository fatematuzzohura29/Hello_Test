#include<stdio.h>
int main()
{
   int n1,n2,n3,n4,largest,smallest;
   printf("Enter four digits:");
   scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
   if(n1>n2)
   {
   largest=n1;
   smallest=n2;
   }
   else if(n2>n1)
   {
  largest=n2;
smallest=n1;

   }
  if(n3>largest)
{
largest=n3;
}
else if(n3<smallest)
{
  smallest=n3;

}
 if(n4>largest)
{
largest=n4;

}
else if(n4<smallest)
{
smallest=n4;

}
printf("Largest:%d\n",largest);
printf("Smallest :%d\n",smallest);

return 0;
}
