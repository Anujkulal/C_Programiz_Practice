//program to check prime number
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>     
int main() {
    int num, flag = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    for(int i=2; i<=num/2; i++){
        if(num % i == 0){
            flag = 1;
            break;
        }
    }
        if(num <=1){
            flag = 0;
        }
    if (flag == 1){
        printf("%d is a prime number\n",num);
    }
    else printf("%d is not a prime number\n",num);
    return 0;
}