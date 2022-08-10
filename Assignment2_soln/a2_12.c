#include <stdio.h>

int main()
{
    float a, b=76.23;
    printf("Enter the amount in INR: ");
    scanf("%f", &a);
    printf("The money in USD is: %f", a*b);
    return 0;
}