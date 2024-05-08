//Swap the numbers using temp variable
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
    int first, second, temp;
    printf("Enter the first and second number: ");
    scanf("%d%d",&first, &second);
    printf("Before swaping:\n first = %d\n second = %d\n",first, second);
    temp = first;
    first = second;
    second = temp;
    printf("After swaping:\n first = %d\n second = %d\n",first, second);
    return 0;
}