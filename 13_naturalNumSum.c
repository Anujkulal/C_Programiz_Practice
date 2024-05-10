//sum of natural numbers
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main() {
    // // For loop
    // int n, sum=0;
    // printf("Enter the number of natural numbers: ");
    // scanf("%d", &n);
    // for(int i=1; i<=n; i++)
    //     sum+=i;
    // printf("The sum of natural numbers is %d\n",sum);

    // //while loop
    int n, sum=0;
    printf("Enter the number of natural numbers: ");
    scanf("%d", &n);
    int i = 1;
    while(i<=n){
        sum += i;
        i++;
    }
    printf("The sum of natural numbers is %d\n",sum);
    return 0;
}