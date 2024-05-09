//to find largest number among 3 numbers
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main() {
    // // using only if statement
    // int n1, n2, n3;
    // printf("Enter the 3 numbers: ");
    // scanf("%d%d%d",&n1, &n2, &n3);
    // if(n1 > n2 && n1 > n3)
    //     printf("%d is greater\n", n1);
    // if(n2 > n1 && n2 > n3)
    //     printf("%d is greater\n", n2);
    // if(n3 > n2 && n3 > n1)
    //     printf("%d is greater\n", n3);

    // // using if-else
    // int n1, n2, n3;
    // printf("Enter the 3 numbers: ");
    // scanf("%d%d%d",&n1, &n2, &n3);
    // if(n1>n2 && n1>n3)
    //     printf("%d is greater\n",n1);
    // else if(n2>n1 && n2>n3)
    //     printf("%d is greater\n",n2);
    // else
    //     printf("%d is greater\n",n3);

    // // using nested if-else
    int n1, n2, n3;
    printf("Enter the 3 numbers: ");
    scanf("%d%d%d",&n1, &n2, &n3);
    if(n1>n2){
        if(n1>n3){
            printf("%d is greater\n",n1);
        }
        else
            printf("%d is greater\n",n3);
    }
    else{
        if(n2>n3)
            printf("%d is greater\n",n2);
        else    
            printf("%d is greater\n",n3);
    }
    return 0;
}