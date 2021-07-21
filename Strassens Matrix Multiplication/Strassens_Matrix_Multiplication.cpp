/*Program for Strassen's Matrix Multiplication 
Complexity: Stressens::O(n^2.81)
            Multiplication using divide & conquer::O(n^2)
            Simple Multiplication::O(n^2)
*/

#include<stdio.h>
int main(){
  int a[2][2],b[2][2],c[2][2],i,j;
  int m1,m2,m3,m4,m5,m6,m7;

  printf("Enter the 4 elements for matrix A: ");
  for(i=0;i<2;i++)
      for(j=0;j<2;j++)
           scanf("%d",&a[i][j]);

  printf("Enter the 4 elements for matrix B: ");
  for(i=0;i<2;i++)
      for(j=0;j<2;j++)
           scanf("%d",&b[i][j]);

  printf("\nMatrix A\n");
  for(i=0;i<2;i++){
      printf("\n");
      for(j=0;j<2;j++)
           printf("%d\t",a[i][j]);
  }

  printf("\nMatrix B\n");
  for(i=0;i<2;i++){
      printf("\n");
      for(j=0;j<2;j++)
           printf("%d\t",b[i][j]);
  }

  m1= (a[0][0] + a[1][1])*(b[0][0]+b[1][1]);//P
  m2= (a[1][0]+a[1][1])*b[0][0];//Q
  m3= a[0][0]*(b[0][1]-b[1][1]);//R
  m4= a[1][1]*(b[1][0]-b[0][0]);//S
  m5= (a[0][0]+a[0][1])*b[1][1];//U
  m6= (a[1][0]-a[0][0])*(b[0][0]+b[0][1]);//V
  m7= (a[0][1]-a[1][1])*(b[1][0]+b[1][1]);//T

  c[0][0]=m1+m4-m5+m7;
  c[0][1]=m3+m5;
  c[1][0]=m2+m4;
  c[1][1]=m1-m2+m3+m6;

   printf("\nMultiplication Matrix \n");
   for(i=0;i<2;i++){
      printf("\n");
      for(j=0;j<2;j++)
           printf("%d\t",c[i][j]);
   }

   return 0;
}


