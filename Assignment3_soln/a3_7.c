#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the coefficient of equation: ");
    scanf("%d%d%d", &a, &b, &c);
    int d=(b*b)-(4*a*c);
    if(d>0){
        printf("Real and distinct roots");
    }
    else if (d==0)
    {
        printf("Real and equal roots");
    }
    else printf("Imaginary roots");
    return 0;
}