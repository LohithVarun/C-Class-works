#include<stdio.h>
int leap(int a)
{
  if(a % 4 == 0)
  {
    if(a % 100 == 0){
      if(a % 400 == 0)
      {
        printf("The year is a leap year");
      }
      else
      {
       printf("The year is not a leap year"); 
      }
    }
    else
    {
     printf("The year is a leap year"); 
    }
  }
  else
  {
    printf("The year is not a leap year");
  }
}
void main()
{
  int a;
  printf("Enter a year :\n");
  scanf("%d",&a);
  leap(a);
}