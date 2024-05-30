#include<stdio.h>

int main()

{

   int mm, mp,mc,mmpc,mmp;

   
   // mm=marks in math
  //mp=marks in phy
  //mc=marks in chem
  //mmpc=marks in math+phy+chem
  //mmp=marks in math+phy

   printf("Input  mm:");
   scanf("%d",&mm);
   printf("Input  mp:");
   scanf("%d",&mp);
   printf("Input  mc:");
   scanf("%d",&mc);
   printf("Input mmpc:");
   scanf("%d",& mmpc);
   printf("Input mmp:");
   scanf("%d",&mmp );

  if((mm>=60&&mp>=50&&mc>=40)||(mmpc>=200&&mmp>=150))
 {
    printf("candidate is eligible");

 }

 else
 {
   printf("Candidate is not eligible");

 }
 return 0;
 }





