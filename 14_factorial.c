//to find the factorial of a number
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main() {
    int n, i, fact = 1;
    printf("Enter the number: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        fact *= i;
    }
    printf("The factorial of a number is %d\n", fact);
    return 0;
}