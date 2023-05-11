#include<stdio.h>
int pro(int a[], int n){
    int res = 1;
    for(int i = 0 ; i < n ; i ++){
        res = res * a[i];
    }
     return res;
}
void main() {
    int a[] = {1,2,3,4};
    int n = sizeof(a) / sizeof(a[0]);
    printf("The product of the array is : %d",pro(a,n));
}