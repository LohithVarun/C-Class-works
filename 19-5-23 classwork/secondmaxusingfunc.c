#include<stdio.h>
void secmax(int a[],int n){
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
}
void main(){
  int a[100],n;
  printf("Enter the size of the array :\n");
  scanf("%d",&n);
  printf("Enter the elements :\n");
  for(int i = 0 ; i < n ; i ++){
    scanf("%d",&a[i]);
  }
  secmax(a,n);
}