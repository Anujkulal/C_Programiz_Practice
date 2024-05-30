//to check whether the number is arrstrong or not
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int numLength(int num){
    int count = 0; 
    while(num != 0){
        int quotient = num / 10;
        count = count + 1;
        num = num / 10;
    }
    return count;
}

int armstrong(int originalNum, int length){
    int result = 0;
    while(originalNum != 0){
        int remainder = originalNum % 10;
        result = result + pow(remainder, length);
        originalNum /= 10;
    }
    return result;
}

int main() {
    int num, originalNum;
    printf("Enter the number: ");
    scanf("%d", &num);
    originalNum = num;
    int length = numLength(num);
    return 0;
    printf("reslut = %d\n", armstrong(originalNum, length));
}