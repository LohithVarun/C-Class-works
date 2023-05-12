#include<stdio.h>
void main() {
  int n;
  printf("Enter the number of elements in the array :\n");
  scanf("%d",&n);
  printf("Enter the elements in the array :\n");
  int a[n];
  for(int i = 0 ; i < n ; i ++)
    {
      scanf("%d",&a[i]);
    }
   for(int i = 0 ; i < n ; i ++)
   {
      int temp;
      for(int j = i + 1 ; j < n ; j ++)
      {
        if(a[i] < a[j])
        {
          temp = a[i];
          a[i] = a[j];
          a[j] = temp;
        }
      }
   } 
  printf("The second largest element is : %d",a[1]);
  printf("\n");
  printf("The second smallest element is : %d",a[n - 2]);
}