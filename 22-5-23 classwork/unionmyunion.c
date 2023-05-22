#include<stdio.h>

union myunion{
  int a;
  float b;
}u;

int main(){
  u.a = 7;
  u.b = 12.56;
  printf("Value of integer :%d",u.a);
  printf("Value of float :%f",u.b);
}