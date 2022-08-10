#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    if(a%3==0 && a%2==0){
        printf("Yes");
    }
    else printf("No");
    return 0;
}