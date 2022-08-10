#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    int b=a&1;
    if(b)
        printf("a is Odd");
    else 
        printf("a is even");
    return 0;
}