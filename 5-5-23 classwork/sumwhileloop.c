#inclue<stdio.h>
void main() {
  int a,sum = 0;
  printf("Enter a number :");
  scanf("%d",&a);
  while(int i <= a){
    sum += i;
    ++i;
  }
  printf("The sum is : %d",sum);
}