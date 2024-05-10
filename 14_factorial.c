// //to find the factorial of a number
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    int n, i, fact = 1;
    printf("Enter the number: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Error!, factorial of a number cannot be negative\n");
    else
    {
        for (i = 1; i <= n; i++)
            fact *= i;
        printf("The factorial of a number is %d\n", fact);
    }

    return 0;
}

// // // using recursive function
//
// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
//  double factorial(double n);
// int main()
// {
//     double n, i, fact = 1;
//     printf("Enter the number: ");
//     scanf("%lf", &n);
//     int fact1 = factorial(n);
//     if (fact1 == -1)
//         printf("Error!, factorial of a number cannot be negative\n");
//     else
//         printf("The factorial of a number is %lf\n", factorial(n));
//     return 0;
// }

// double factorial(double n)
// {
//     if (n < 0)
//         return -1;
//     else if (n == 0 || n == 1)
//         return 1;
//     else
//     {
//         return n * factorial(n - 1);
//     }
// }
