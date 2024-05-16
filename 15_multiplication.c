//multiplication table
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main() {
    int n, i;
    printf("Enter the number: ");
    scanf("%d", &n);
    for(i=1; i<=10; i++){
        printf("%d x %d = %d\n",n, i, n*i);
    }
    return 0;
}