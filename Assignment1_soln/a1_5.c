#include <stdio.h>
#include<string.h>

int main()
{
    char ch[50];
    gets(ch);
    printf("%d", strlen(ch));

    return 0;
}