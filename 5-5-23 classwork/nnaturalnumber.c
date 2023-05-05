#include <stdio.h>
void main() {
  int a,i;
  printf("Enter a number :\n");
  scanf("%d",&a);
  printf("Printing Natural numbers :");
  for (i = 1;i <= a;i++){
    printf("%d\t",i);
  }
}