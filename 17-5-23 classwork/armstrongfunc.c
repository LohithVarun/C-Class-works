#include<stdio.h>
int arm(int n){
  int originalNum,remainder,result;
  originalNum = n;
  while (originalNum != 0) {
        remainder = originalNum % 10;
       result += remainder * remainder * remainder;
       originalNum /= 10;
    }
    if (result == n)
        printf("\n%d is an Armstrong number.", n);
    else
        printf("\n%d is not an Armstrong number.", n);
}
void main()
{
  int a;
  printf("Enter a number :");
  scanf("%d",&a);
  arm(a);
}