//find roots of quadratic equation
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main() {
    double a, b, c, discriminant, root1, root2, real, img;
    printf("Enter the coefficients a, b and c: ");
    scanf("%lf%lf%lf", &a, &b, &c);
    discriminant = (b*b) - 4*a*c;
    if(discriminant > 0){
        root1 = (-b + sqrt(discriminant))/(2*a);
        root2 = (-b - sqrt(discriminant))/(2*a);
        printf("Root1 = %lf\nRoot2 = %lf",root1, root2);
    }
    else if(discriminant == 0){
        root1 = root2 = -b/(2*a);
        printf("Root1 = %lf\nRoot2 = %lf",root1, root2);
    }
    else{
        real = -b/(2*a);
        img = sqrt(-(discriminant))/(2*a);
       printf("Root1 = %lf + i%lf\n",real, img);
       printf("Root2 = %lf - i%lf\n",real, img);
    }
    return 0;
}