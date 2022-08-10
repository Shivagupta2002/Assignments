#include <stdio.h>

int main()
{   int a=20;
    for (int i = 1; i <=10 ; i++)
    {
        printf("%d ", a);
        a-=2;
    }
    
    return 0;
}