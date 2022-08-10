#include <stdio.h>

int main()
{
    char a[11];
    gets(a);
    printf("Day-%c%c , Month-%c%c , Year-%c%c%c%c", a[0],a[1],a[3],a[4],a[6],a[7],a[8],a[9]);
    return 0;
}