#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    printf("The new number is: %d", (a/10)*10);
    return 0;
}