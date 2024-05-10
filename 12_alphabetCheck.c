//Program to check alphabet
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main() {
    char c;
    printf("Enter the character: ");
    scanf("%c", &c);
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        printf("It is a alphabet\n");
    else
        printf("It is not a alphabet\n");
    return 0;
}