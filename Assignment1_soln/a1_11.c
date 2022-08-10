#include <stdio.h>

int main()
{
    char a[10];
    gets(a);
    printf("%c%c Hour and %c%c Minute", a[0],a[1],a[3], a[4]);
    return 0;
}