#include<stdio.h>
 
 int main() {
     int i,j,a[2][2];
     printf("Enter the elements of the matrix :\n");
     for (i = 0 ; i < 2 ; i ++){
         printf("Enter the row %d of matrix :",i+1);
         for(j = 0 ; j < 2 ; j ++){
             scanf("%d",&a[i][j]);
         }
     }
     float det = a[0][0] * a[1][1] - a[0][1] * a[1][0];
     printf("The determinant of the above entered matrix is : %.2f",det);
     return 0;
 }