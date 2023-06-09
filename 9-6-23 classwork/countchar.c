#include <stdio.h>
#include <string.h>
void main(){
    char str[100];
    int i,total;
    total = 0;
    printf("Enter a string :");
    gets(str);
    total = 0;
    i = 0;
    while(str[i] != '\0'){
        if(str[i] != ' '){
            total++;
        }
        i++;
    }
    printf("The total number of character is the string is : %d",total);
}