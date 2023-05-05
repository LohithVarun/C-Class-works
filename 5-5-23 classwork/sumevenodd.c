#include <stdio.h>
void main() {
  int a,odd = 0,even = 0;
  printf("Enter a number :\n");
  scanf("%d",&a);
  for(int i = 1; i <= a; i++) {
    if (i % 2 == 0){
      even = even + i;
    }
    else{
      odd = odd + i;
    }
  }
  printf("\nThe sum of even numbers is : %d",even);
  printf("\nThe sum of odd numbers is : %d",odd);
}