//to count number of digits
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main() {
    long long num;
    int count = 0;
    printf("Enter the number: ");
    scanf("%lld", &num);

    while(num > 0){
        num = num / 10;
        count++;
    }
    printf("Number of digits is %d\n", count);
    return 0;
}