#include<stdio.h>

int sum(int n){
  if(n <= 1)
    return 1;
  else
    return n+sum(n-1);
}

void main(){
  int n;
  printf("\nEnter a number :");
  scanf("%d",&n);
  printf("The answer is : %d",sum(n));
}