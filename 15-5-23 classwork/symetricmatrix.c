#include <stdio.h>
void main()
{
    int r,c,a[30][30],i,j,s = 1;
    
    printf("Enter the number of rows and columns :\n");
    scanf("%d %d",&r,&c);
    
    printf("Enter the values of the matrix :\n");
    for(i = 0 ; i < r ; i ++)
    {
        for(j = 0 ; j < c ; j ++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    if(r != c)
    {
        printf("The matrix is not symmetric.");
    }
    else
    {
        for(i = 0 ; i < r ; i ++)
        {
            for(j = 0 ; j < c ; j ++)
            {
                if(a[i][j] != a[j][i])
                {
                    s = 0;
                    break;
                }
            }
        }
    }
    if(s == 1)
    {
        printf("The matrix is symmetric.");
    }
    else
    {
        printf("The matrix is not symmetric.");
    }
}