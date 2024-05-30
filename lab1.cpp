#include<stdio.h>
int main()
{
   int a,b,add,sub,multi;
   float div;
   printf("Enter values of a and b:");
   scanf("%d%d",&a,&b);

   add=a+b;
   sub=a-b;
   multi=a*b;
   div=a/b;
   printf("add =%d\n",add);
   printf("Sub=%d\n",sub);
   printf("multi=%d\n",multi);
   printf("div=%.2f\n",div);

return 0;

}
