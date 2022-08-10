#include <stdio.h>

int main()
{
    int n;
    printf("Enter the n: ");
    scanf("%d", &n);
    for (int i = n; i >=1 ; i--)
    {
        printf("%d ", 2*i-2);
    }
    return 0;
}