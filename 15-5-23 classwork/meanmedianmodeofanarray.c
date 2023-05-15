#include <stdio.h>
void main()
{
    int n,i,j,a[30],sum = 0,t,mode,maxcount = 0,count;
    
    printf("Enter the size of the array :\n");
    scanf("%d",&n);
    
    printf("Enter the elements in the array :\n");
    for(i = 0 ; i < n ; i ++)
    {
        scanf("%d",&a[i]);
        sum += a[i];
    }
    float mean = (float)sum / n;
    
    for(i = 0 ; i < n - 1 ; i ++)
    {
        for(j = 0 ; j < n - i - 1 ; j ++)
        {
            if(a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    float median;
    if(n % 2 == 0)
    {
        median = (float)(a[n/2-1] + a[n/2]) / 2;
    }
    else
    {
        median = a[n / 2];
    }
    for(i = 0 ; i < n ; i ++)
    {
        count = 0;
        for(j = 0 ; j < n ; j ++)
        {
            if(a[i] == a[j])
            {
                count++; 
            }
        }
        if(count > maxcount)
        {
            maxcount = count;
            mode = a[i];
        }
    }
    if(maxcount == 1)
    {
        printf("There is no mode\n");
    }
    else
    {
        printf("The mode is :%d",mode);
    }
    printf("\nThe mean is :%.2f",mean);
    printf("\nThe median is :%.2f",median);
}