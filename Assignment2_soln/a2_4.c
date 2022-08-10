#include <stdio.h>

int main()
{
    int x,y;
    printf("Enter two numbers a and b: ");
    scanf("%d%d", &x, &y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("a is %d and b is %d", x, y);
    return 0;
}