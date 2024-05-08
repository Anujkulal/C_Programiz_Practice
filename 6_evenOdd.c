//
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    (num%2==0) ? printf("The number is even\n") : printf("The number is odd\n");
    return 0;
}