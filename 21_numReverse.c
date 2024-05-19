//program to reverse a number
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main() {
    int num, i, reverse = 0, remainder;
    printf("Enter the digit: ");
    scanf("%d", &num);
    int original = num;
    while(num != 0){
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }
    printf("Original num: %d\nReversed number: %d\n",original, reverse);
    return 0;
}