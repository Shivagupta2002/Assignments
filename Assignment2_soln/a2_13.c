#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the number: ");
    scanf("%d", &a);
    b=a%10;
    a=a/10;
    int c=b*100+a;
    printf("The new number is: %d", c);
    return 0;
}