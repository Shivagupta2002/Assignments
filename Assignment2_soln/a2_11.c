#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the number and digit: ");
    scanf("%d%d", &a, &b);
    printf("The new number is: %d", a*10+b);
    return 0;
}