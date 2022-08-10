#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    int d=a>b?(a>c?a:c):(b>c?b:c);
    printf("The largest of the three is %d", d);
    return 0;
}