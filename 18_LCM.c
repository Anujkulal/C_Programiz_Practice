// //to find the LCM of a number
// #include<stdio.h>
// #include<stdlib.h>
// #include<math.h>
// #include<string.h>
// int main() {
//     int n1, n2, max;
//     printf("Enter the two numbers: ");
//     scanf("%d%d", &n1, &n2);

//     //find maximum of two numbers and store it in max
//     max = (n1>n2)? n1: n2;
//     while(1){
//         if(max % n1 == 0 && max % n2 ==0){
//             printf("The LCM of %d and %d is %d\n", n1, n2, max);
//             break;
//         }
//         max++;
//     }
//     return 0;
// }

// // to find lcm of a number using gcd
//
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main() {
    int n1, n2, i, gcd, lcm;
    printf("Enter the two numbers:");
    scanf("%d %d", &n1, &n2);
    for(i=1; i<=n1 && i<=n2; i++){
        if(n1%i==0 && n2%i==0){
            gcd=i;
        }
    }
    lcm = (n1 * n2)/gcd;
    printf("The LCM of %d and %d is %d\n",n1, n2, lcm);
    return 0;
}