#include <stdio.h>
void main(){
    char a[100];
    int i;
    printf("Enter a string :\n");
    gets(a);
    printf("The capitalized version is : \n");
    if(a[0] >= 97 && a[0] <= 122){
        a[0] -= 32;
    }
    for(i = 1; a[i] != '\0'; i++){
        if(a[i-1] == 32){
            a[i] -= 32;
        }
    }
    puts(a);
}