#include<stdio.h>
int add(int a , int b)
{
  return a + b;
}
void main()
{
  int a,b;
  printf("Enter 2 Numbers a and b :");
  scanf("%d %d",&a,&b);
  int c = add(a,b);
  printf("The sum of %d and %d is : %d",a,b,c);
}