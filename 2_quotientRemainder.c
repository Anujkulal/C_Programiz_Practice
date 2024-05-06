// Program to compute quotient and remainder
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
    int dividend, divisor;
    printf("Enter the divident and divisor: ");
    scanf("%d%d", &dividend, &divisor);
    printf("Quotient = %d\n Remainder = %d\n", (dividend/divisor), (dividend % divisor));
    return 0;
}