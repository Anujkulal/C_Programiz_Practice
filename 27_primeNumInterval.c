//to print the prime numbers in a given intervals
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int isprime(int n){
    for(int i=2; i*i<=n; i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}
int main() {
    int n1, n2; //is prime
    printf("Enter the interval: ");
    scanf("%d %d", &n1, &n2);
    
    // swap the number if first number is greater
    if(n1 > n2){
    n1 = n1 + n2;
    n2 = n1 - n2;
    n1 = n1 - n2;
    }
    
    if(n1 == 1 || n1 == 0){
        n1 = n1 + 1;
        printf("Prime number will be printed in the interval %d --> %d\n", n1, n2);
    }
    for(int i = n1; i<=n2; i++){
        if(isprime(i)){
            printf("%d ", i);
        }
    }
        printf("\n");
    return 0;
}