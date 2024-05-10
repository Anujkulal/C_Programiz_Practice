//to check whether the number is +ve, -ve or 0 using nested if else
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main() {
    float num;
    printf("Enter the number: ");
    scanf("%f", &num);
    if(num <= 0.0){
        if(num < 0.0)
            printf("The number is negative\n");
        else{
            printf("The number is zero\n");
        }
    }
    else
        printf("The number is positive\n");
    return 0;
}