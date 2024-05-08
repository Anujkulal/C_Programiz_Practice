// program to find the size of variables
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
    int intType;
    float floatType;
    double doubleType;
    char charType;
    printf("Size of integer: %zu bytes\n", sizeof(int)); //%zu is used to print the size of variable, z is a length modifier and u stands for unsigned type(it can hold zero and +ve integers but cannot hold -ve values)
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of character: %zu bytes\n", sizeof(char));

    return 0;
}