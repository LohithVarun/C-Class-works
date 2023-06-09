#include <stdio.h>
#include <string.h>
void main(){
    int end,start,len,temp;
    char a[100];
    printf("Enter a word :");
    scanf("%s",a);
    len = strlen(a);
    start = 0;
    end = len-1;
    for(int i = 0; i < end ; i++){
        temp = a[i];
        a[i] = a[end];
        a[end] = temp;
        end--;
    }
    printf("Reversed string is = %s",a);
}