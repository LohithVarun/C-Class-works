#include<stdio.h>
void main(){
    int r,c,i,j;
    int a[30][30],b[30][30],d[30][30];
    printf("Enter the number of rows in marix A :\n");
    scanf("%d",&r);
    printf("Enter the number of columns in marix A :\n");
    scanf("%d",&c);
    printf("Enter the elements of A matrix\n");
    for(i = 0 ; i < r ; ++i){
        for(j = 0 ; j < c ; ++j){
            printf("enter the elemnt A%d%d\n",i + 1 , j + 1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the number of rows in marix B :\n");
    scanf("%d",&r);
    printf("Enter the number of columns in marix B :\n");
    scanf("%d",&c);
    printf("Enter the elements of marix B\n");
    for(i = 0 ; i < r ; ++i){
        for(j = 0 ; j < c ; ++j){
            printf("enter the elemnt B%d%d\n",i + 1 , j + 1);
            scanf("%d",&b[i][j]);
        }
    }
    for(i = 0 ; i < r ; ++i){
        for(j = 0 ; j < c ; ++j){
            d[i][j] = a[i][j] + b[i][j];
        }
    }
  printf("The sum of matrix : \n")
    for(i = 0 ; i < r ; ++i){
        for(j = 0 ; j < c ; ++j){
            printf(" %d",d[i][j]);
            if ( j ==  c - 1){
                printf("\n");
            }
        }
    }
}