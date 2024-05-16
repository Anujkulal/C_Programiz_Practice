//
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main() {
    int a = 0, b = 1, next, n, i;
    printf("Enter the no of terms: ");
    scanf("%d", &n);
    printf("Fibonacci series: %d %d ",a, b);
    next = a + b;
    for(i=2; i<n; i++){
        printf("%d ",next);
        a = b;
        b = next;
        next = a + b;
    }
    return 0;
}