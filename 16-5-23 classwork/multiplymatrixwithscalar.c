#include <stdio.h>
#define s 3 // Maximum size of the array
int main()
{
    int A[s][s]; 
    int num, row, col;

    printf("Enter elements in matrix of size %dx%d: \n", s, s);
    for(row=0; row<s; row++)
    {
        for(col=0; col<s; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }

    printf("Enter any number to multiply with matrix A: ");
    scanf("%d", &num);

    for(row=0; row<s; row++)
    {
        for(col=0; col<s; col++)
        {
  
            A[row][col] = num * A[row][col];
        }
    }

    printf("\nResultant matrix c.A = \n");
    for(row=0; row<s; row++)
    {
        for(col=0; col<s; col++)
        {
            printf("%d ", A[row][col]);
        }
        printf("\n");
    }

    return 0;
}