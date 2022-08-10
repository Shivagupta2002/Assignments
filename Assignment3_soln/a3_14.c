#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    if(a%7==0 && a%3==0){
        printf("It is divisible by both 7 and 3");
    }
    else if (a%7==0 && a%3!=0)
    {
        printf("It is divisible by 7");
    }
    else if (a%7!=0 && a%3==0)
    {
        printf("It is divisible by 3");
    }
    else printf("It is not divisible by 7 or 3");

    
    
    return 0;
}