#include <stdio.h>

int isPalindrome(int number) {
    int reversedNumber = 0;
    int originalNumber = number;

    while (number > 0) {
        int remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }

    if (originalNumber == reversedNumber)
        return 1;
    else
        return 0;
}

void main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPalindrome(number))
        printf("%d is a palindrome.\n", number);
    else
        printf("%d is not a palindrome.\n", number);
}