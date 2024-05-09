//To check whether the character is vowel or consonant
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
    char ch;
    printf("Enter the character: ");
    scanf("%c",ch);
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        printf("Entered character is vowel");
    else if(!isalpha(ch))
        printf(" ");

    return 0;
}