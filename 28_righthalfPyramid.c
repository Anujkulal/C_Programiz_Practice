//Right half pyramid
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}