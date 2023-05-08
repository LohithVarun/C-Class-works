#include <stdio.h>
void main() {
  int a[100],i,n,min,max;
  printf("Enter the size of the array :");
  scanf("%d",&n);
  printf("Enter the elements :");
  for(i = 0;i <= n;i++){
    scanf("%d",&a[i]);
  }
  min = max = a[0];
  for(i = 1;i <= n;i++) {
    if(min>a[i])
      min = a[i];
    if(max<a[i])
      max = a[i];
  }
  printf("The minimum value is : %d",min);
  printf("The maximum value is : %d",max);
}