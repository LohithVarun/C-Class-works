#include <stdio.h>
#include <string.h>
void main(){
    char a[100];
    int i;
    int pal = 0;
    int len;
    printf("Enter a word :");
    scanf("%s",a);
    len = strlen(a);
    for(i = 0; i < len; i++){
        if(a[i] != a[len-i-1]){
            pal = 1;
            break;
        }
    }
    if(pal){
        printf("%s is not a palindrome.",a);
    }
    else{
        printf("%s is a palindrome.",a);
    }
}