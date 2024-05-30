#include<stdio.h>
int main()
{
 int a[3][3],b[3][3],c[3][3] ,row,col,i,j;
printf("Enter rows and columns:");
scanf("%d%d",&row,&col);

 //assigning elements to the  1st matrix :
 printf("\n Enter the elements for A matrix.\n");
 for(i=0;i<row;i++)
 {
  for(j=0;j<col;j++)
  {
    printf("A[%d][%d]:", i,j);
    scanf("%d", &a[i][j]);

 }
 printf("\n");
 }


  //assigning elements to the 2nd matrix:

  printf(" Enter the elements for B matrix.\n");

 for(i=0;i<row;i++)
 {
  for(j=0;j<col;j++)
  {
      printf("B[%d][%d]:", i,j);
      scanf("%d", &b[i][j]);

 }
printf("\n");
 }

 //printing the  1st matrix printf("\nA=");
 printf("\nA=\n");
 for(i=0;i<row;i++)
 {
 printf("\t");
  for(j=0;j<col;j++)
  {
    printf("%d", a[i][j]);
  }

  printf("\n");

 }
  //printing the 2nd  matrix

 printf("\nB=\n");
 for(i=0;i<row;i++)
 {
 printf("\t");
  for(j=0;j<col;j++)
  {
    printf("%d", b[i][j]);
  }

  printf("\n");
 }
 //computing the sum
 //printf("\n A+B=\n");
  for(i=0;i<row;i++)
 {
  for(j=0;j<col;j++)
  {
   c[i][j]=a[i][j]+b[i][j];
  }
 }
// crinting the sum
//printf("\n sum of the matrix:\n");
 printf("\A+B=");

for(i=0;i<row;i++)
 {
 printf("\t");
  for(j=0;j<col;j++){
printf("%d", c[i][j]);
  }
  printf("\n");


  }


  return 0;
  }
