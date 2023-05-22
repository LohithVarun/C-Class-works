#include<stdio.h>
struct person{
  int age;
  char name[100];
  float height;
}p[5];
void main(){
  for(int i = 0 ; i < 5 ; i ++){
    printf("Person %d",i+1);
    printf("\nEnter the name of persom :");
    scanf("%s",p[i].name);
    printf("\nEnter the age of person :");
    scanf("%d",&p[i].age);
    printf("\nEnter the height of person :");
    scanf("%f",&p[i].height);
  }
  printf("\n\nPERSON DETAILS : ");
  for(int i = 0 ; i < 5 ; i ++){
    printf("\n\nPerson age :%d",p[i].age);
    printf("\nPerson name :");
    puts(p[i].name);
    printf("Person height :%.f",p[i].height);
  }
}