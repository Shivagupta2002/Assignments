#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the number: ");
    scanf("%d", &a);
    b=a%10;
    a=a/10;
    b+=a%10;
    a=a/10;
    b+=a%10;
    printf("The sum of the digits is: %d", b);
    return 0;
}