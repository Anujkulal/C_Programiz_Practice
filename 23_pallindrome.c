//Program to check whether the number is palindrome or not
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main() {
    int num, remainder, reverse = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    int original = num;

    while(num !=0){
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }
    if(reverse == original){
        printf("The number is a palindrome.\n");
    }
    else printf("The number is not a palindrome.\n");
    return 0;
}