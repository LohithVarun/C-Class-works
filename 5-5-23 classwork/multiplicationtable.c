#include<stdio.h>
void main(){
  int i,a;
  printf("Enter a number :");
  scanf("%d",&a);
  printf("\nThe multiplication table is : \n");
  for(i = 0; i <= a; i++){
    printf("%d x %d = %d\n",a,i,(a*i));
  }
}