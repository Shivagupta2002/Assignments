#include <stdio.h>

int main()
{
    int a, b, lcm;
    printf("Enter a and b: ");
    scanf("%d%d", &a, &b);
    for (int i = 1; i <= a*b; i++)
    {
        if(i%a==0 && i%b==0){
            lcm=i;
            break;
        }
    }
    printf("The LCM of a and b is: %d", lcm);
    
    return 0;
}