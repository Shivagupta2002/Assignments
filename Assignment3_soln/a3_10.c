#include <stdio.h>

int main()
{
    float a, b;
    printf("Enter the cp of product: ");
    scanf("%f", &a);
    printf("Enter the sp of product: ");
    scanf("%f", &b);
    if(a>=b){
        printf("The percentage loss on the product is: %0.2f",((a-b)/a)*100);
    }
    else printf("The percentage profit on the product is: %0.2f",((b-a)/a)*100);
    return 0;
}