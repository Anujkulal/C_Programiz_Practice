//to check leap year
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main() {
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    if(year % 400 ==0) // if a num divisible by 400 then it is a leap year
        printf("%d is a leap year\n",year);
    else if(year % 100 == 0) //
        printf("%d is not a leap year\n",year);
    else if(year % 4 == 0)
        printf("%d is a leap year\n", year);
    else
        printf("%d is not a leap year\n", year);
    return 0;
}