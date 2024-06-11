//program to check prime number
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>     
int main() {
    int num;
    int flag = 1;//is prime
    printf("Enter the number: ");
    scanf("%d", &num);
    if(num == 0 || num ==1) flag = 0;
    for(int i=2; i<num; i++){  // for(int i=2; i<=num/2; i++)
        if(num % i == 0){
            flag = 0;//is not prime
            break; //if num is divisible by any number then break out from a loop 'Cascadia Code', 'Droid Sans Mono', 'monospace'
        }
    }
    if (flag == 1){
        printf("%d is a prime number\n",num);
    }
    else printf("%d is not a prime number\n",num);
    return 0;
}