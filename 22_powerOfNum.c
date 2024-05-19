//program to calculate the power of a number
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main() {
    float base, exp, result = 1.0;
    printf("Enter the base and exponent: ");
    scanf("%f%f", &base, &exp);
    // //using for loop
    // for(int i=1; i<=exp; i++){
    //     result = result * base;
    // }
    // printf("Result is %.2f\n", result);

    // // using while loop 
    // while(exp != 0){
    //     result = result * base;
    //     exp--;
    // }
    // printf("Result is %.2f\n", result);

    // //Using pow() function
    result = pow(base, exp);
    printf("Result is %.2f\n",result);
    return 0;
}