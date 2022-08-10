#include <stdio.h>

int main()
{
    int a, i=0;
    printf("Enter the number: ");
    scanf("%d", &a);
    while(a){
        a=a>>1;
        i++;
    }
    printf("The position of LSB is: %d", i);
    return 0;
}