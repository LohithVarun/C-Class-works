#include<stdio.h>
void main(){
  int a,i,count = 0;
  printf("Enter a number :\n");
  scanf("%d",&a);
  i = 2;
  while(i <= a/2){
    if(a % i == 0){
      count = 1;
      break;
    }
    i++;
  }
  if( count == 0){
    printf("It is a prime number.\n");
  }
  else{
    printf("It is not a prime number.");
  }
}