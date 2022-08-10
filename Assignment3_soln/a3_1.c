#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    if(a<=0){
        printf("Non-positive");
    }
    else printf("positive");
    return 0;
}