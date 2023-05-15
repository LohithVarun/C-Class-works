#include <stdio.h>
void main()
{
    int r,c,a[30][30],b[30][30],i,j,e = 1;
    
    printf("Enter the number of rows and columns of A matrix:\n");
    scanf("%d %d",&r,&c);
    
    printf("Enter the values of the matrix  A:\n");
    for(i = 0 ; i < r ; i ++)
    {
        for(j = 0 ; j < c ; j ++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the number of rows and columns of B matrix:\n");
    scanf("%d %d",&r,&c);
    
    printf("Enter the values of the matrix  B:\n");
    for(i = 0 ; i < r ; i ++)
    {
        for(j = 0 ; j < c ; j ++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i = 0 ; i < r ; i ++)
    {
        for(j = 0 ; j < c ; j ++)
        {
            if(a[i][j] != b[i][j])
            {
                e = 0;
                break;
            }
        }
    }
    if(e == 1)
    {
        printf("The matrices are equal.");
    }
    else
    {
        printf("The matrices is not equal.");
    }
}    