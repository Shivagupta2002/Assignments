#include <stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int fact=1;;
    for (int i = 1; i <= n; i++)
    {
        fact*=i;
    }
    printf("%d", fact);
    return 0;
}