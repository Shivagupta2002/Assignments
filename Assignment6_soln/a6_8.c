#include <stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int prime=0;
    for (int i = 2; i <= n/2; i++)
    {
        if (n%i==0)
        {
            prime=1;
        }
        
    }
    if(prime==1){
        printf("Not-prime");
    }
    else printf("Prime");
    
    return 0;
}