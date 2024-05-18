//To find GCD of two numbers
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main() {
    int n1, n2, i, gcd;
    printf("Enter two numbers: ");
    scanf("%d%d", &n1, &n2);
    //if user entered negative number it will be converted to +ve number
    n1 = (n1 > 0)? n1: -n1;
    n2 = (n2 > 0)? n2: -n2;

    for(i=1; i<=n1 && i<=n2; i++){
        if(n1%i ==0 && n2%i ==0){
            gcd = i;
        }
    }
    printf("The GCD of %d and %d is %d\n", n1, n2, gcd);
    return 0;
}