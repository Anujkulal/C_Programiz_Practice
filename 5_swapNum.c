// //Swap the numbers using temp variable
// #include<stdio.h>
// #include<stdlib.h>
// #include<math.h>
// int main() {
//     int first, second, temp;
//     printf("Enter the first and second number: ");
//     scanf("%d%d",&first, &second);
//     printf("Before swaping:\n first = %d\n second = %d\n",first, second);
//     temp = first;
//     first = second;
//     second = temp;
//     printf("After swaping:\n first = %d\n second = %d\n",first, second);
//     return 0;
// }
 
//  // OR 

//swap the numbers without using temp variable
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
     int a, b;
    printf("Enter the first and second number: ");
    scanf("%d%d",&a, &b);
    printf("Before swaping:\n first = %d\n second = %d\n",a,b);
    // a = a + b;
    // b = a - b;
    // a = a - b;

    //OR

    // a = a - b;
    // b = a + b;
    // a = b - a;

    //OR

    a = a ^ b; //Using only xor
    b = a ^ b;
    a = a ^ b;
    printf("After swaping:\n first = %d\n second = %d\n",a,b);
    return 0;
}