#include<stdio.h>

int p(int a,int b){
  if(b == 0)
    return 1;
  else
    return a*p(a,b-1);
}

void main(){
  int a,b;
  printf("Enter the value of a and b :");
  scanf("%d %d",&a,&b);
  printf("%d power %d is %d",a,b,p(a,b));
}