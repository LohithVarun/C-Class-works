#include<stdio.h>
void main(){
  int a[100],i,n,m,b[100];
  printf("Enter the size of a :");
  scanf("%d",&n);
  printf("Enter the elements :");
  for(i = 0;i <= n;i++){
    scanf("%d",a[i]);
  }
  printf("Enter the size of b :");
  scanf("%d",&m);
  printf("Enter the elements :");
  for(i = 0;i <= m;i++){
    scanf("%d",&b[i]);
  }
  int c[n + m];
  for(i = 0;i < n;i++){
    c[i] = a[i];
  }
  for(i = 0;i < m;i++){
    c[n + i] = b[i];
  }
  for(i = 0;i < m+n;i++){
    printf("%d",c[i]);
  }
  }