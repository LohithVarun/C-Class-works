#include<stdio.h>
int main(){
  int a[100],i,min,n;
  printf("Enter the number of elements :");
  scanf("%d",&n);
  printf("\nEnter the elements :");
  for(i = 0;i <= n;i++){
    scanf("%d",a[i]);
  }
  min = a[0];
  for(i = 1;i <= n;i++){
    if(min>a[i])
      min = a[i];
  }
  printf("The minimum element is : %d",min);
}