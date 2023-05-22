#include<stdio.h>
struct rectangle{
  float width;
  float height;
};
void main(){
  struct rectangle r;
  printf("Enter the height of the rectangle :");
  scanf("%f",&r.height);
  printf("\nEnter the width of the rectangle :");
  scanf("%f",&r.width);
  printf("\n\n");
  printf("The area of the rectangle is %f",r.height * r.width);
  printf("The perimeter of the rectangle is %f",2 * (r.height + r.width));  
}