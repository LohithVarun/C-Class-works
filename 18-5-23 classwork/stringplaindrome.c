#include<stdio.h>
#include<string.h>
void palindrome(char a[]){
    char reversedArray[100],inputArray[100];
    strcpy(reversedArray, inputArray);
    strrev(reversedArray);
   if(strcmp(inputArray, reversedArray) == 0 )
      printf("%s is a palindrome.\n", inputArray);
   else
      printf("%s is not a palindrome.\n", inputArray);
}
int main(){
    char s[100];
    printf("Enter a string :\n");
    scanf("%s",s);
    palindrome(s);
    return 0;
}