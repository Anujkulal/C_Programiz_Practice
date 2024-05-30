//To display armstrong number between to intervals
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
    int n1,n2, originalNum;
    printf("Enter two numbers (intervals): ");
    scanf("%d %d", &n1, &n2);
    if(n1 > n2){
        n1 = n1 + n2;
        n2 = n1 - n2;
        n1 = n1 - n2;
    }
    printf("The Armstrong numbers between %d and %d are: ", n1, n2);
    
    for(int i = n1; i<=n2; i++){
        int num = i;
        int length = numLength(num);
        int result = armstrong(num, length);

        if(result == num) printf("%d ",result);
    }
    printf("\n");
    return 0;
}