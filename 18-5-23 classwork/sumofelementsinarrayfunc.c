#include<stdio.h>
int arrsum(int a[], int size){
    int sum = 0;
    for(int i = 0 ; i < size ; i++){
        sum += a[i];
    }
    return sum;
}
int main(){
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(a) / sizeof(a[0]);
    printf("Result is : %d",arrsum(a,size));
}