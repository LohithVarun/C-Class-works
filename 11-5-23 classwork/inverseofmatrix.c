#include<stdio.h>
void main() {
    int a[2][2],adj[2][2],d,i,j;
    float inv[2][2];
    printf("Enter the elements of matrix :\n");
    for(i = 0 ; i < 2 ; i ++){
        for(j = 0 ; j < 2; j ++){
            scanf("%d",&a[i][j]);
        }
    }
    d = (a[0][0] * a[1][1]) - (a [0][1] * a[1][0]);
    if(d == 0){
        printf("The determinant cannot be 0\n");
    }
    adj[0][0] = a[1][1];
    adj[1][1] = a[0][0];
    adj[0][1] = -a[0][1];
    adj[1][0] = -a[1][0];
    printf("The inverse of the matrix is :\n");
    for(i = 0 ; i < 2 ; i ++){
        for(j = 0 ; j < 2; j ++){
            inv[i][j] = (adj[i][j])/(float)d;
            printf("\t%0.2lf",inv[i][j]);
        }
        printf("\n");
    }
}