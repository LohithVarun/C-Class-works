#include <stdio.h>
void main()
{
    int a[30],i,n,j,k,t;
    
    printf("Enter the size of the array :\n");
    scanf("%d",&n);
    
    printf("Enter the elements in the array :\n");
    for(i = 0 ; i < n ; i ++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("Enter the value of k :\n");
    scanf("%d",&k);
    
    for(i = 0 ; i < n - 1 ; i ++)
    {
        for(j = 0 ; j < n - i - 1 ; j ++)
        {
            if(a[j] < a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    
    printf("The kth maximum element in the entered array is :%d",a[k - 1]);
}