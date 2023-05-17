#include<stdio.h>
int per(int n){
  int sum,i,rem;
  for( i = 1; i < n; i++)  
  {  
     rem = n % i;  
     if (rem == 0)  
     {  
      sum = sum + i;  
     }  
  }  
  if (sum == n)  
     printf(" \n%d is a Perfect Number",n);  
  else  
     printf("\n %d is not a Perfect Number",n);
}

void main()
{
  int a;
  printf("Enter a number :");
  scanf("%d",&a);
  per(a);
}