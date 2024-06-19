//Inverted Full Pyramid
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<i; j++){
            printf(" "); //removed 1 extra space from inverted left half pyramid code which gives inverted full pyramid
        }
        for(int k=i; k<=n; k++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}