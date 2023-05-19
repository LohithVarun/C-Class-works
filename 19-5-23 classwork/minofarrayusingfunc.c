#include<stdio.h>
void minofarr(int a[],int len){
  int min = a[0];
  for(int i = 0 ; i < l ; i ++){
    if(min > a[i])
      min = a[i];
  }
  printf("The minimum valued element in the array is :%d",min);
}
void main(){
  int n,a[100];
  printf("Enter the size of the array :\n");
  scanf("%d",&n);
  printf("Enter the elements :\n");
  for(int i = 0 ; i < n ; i ++){
    scanf("%d",&a[i]);
  }
  int len = sizeof(a) / sizeof(a[0]);
  minofarr(a,len);
}