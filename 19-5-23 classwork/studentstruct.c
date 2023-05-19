#include<stdio.h>
struct student{
  int rollno;
  char name[100];
  float marks;
}s[4];
void main(){
  for(int i = 0 ; i < 4 ; i ++){
    printf("Student %d",i+1);
    printf("\nEnter the name of student :");
    scanf("%s",s[i].name);
    printf("\nEnter the rollno of student :");
    scanf("%d",&s[i].rollno);
    printf("\nEnter the mark of student :");
    scanf("%f",&s[i].marks);
  }
  printf("\n\nSTUDENT DETAILS : ");
  for(int i = 0 ; i < 4 ; i ++){
    printf("\n\nStudent rollno :%d",s[i].rollno);
    printf("\nStudent name :");
    puts(s[i].name);
    printf("Marks :%.f",s[i].marks);
  }
}