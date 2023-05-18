#include<stdio.h>
void lcmgcd(int a , int b){
    int n,d,rem;
    float gcd,lcm;
    if(a>b){
        n = a;
        d = b;
    }
    else{
        n = b;
        d  = a;
    }
    rem = n % d;
    while(rem != 0){
        n = d;
        d = rem;
        rem = n % d;
    }
    gcd = d;
    lcm = a*b/gcd;
    printf("GCD of %d and %d is %f",a,b,gcd);
    printf("\nLCM of %d and %d is %f",a,b,lcm);
}
void main(){
    int a,b;
    printf("Enter 2 numbers :\n");
    scanf("%d %d",&a,&b);
    lcmgcd(a,b);
}