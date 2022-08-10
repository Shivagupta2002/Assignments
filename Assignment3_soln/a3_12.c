#include <stdio.h>

int main()
{
    char c;
    printf("Enter the alphabet: ");
    scanf("%c", &c);
    if (c>=65 && c<=90)
    {
        /* code */
        printf("Uppercase");
    }
    else if (c>=97 && c<=122)
    {
        printf("Lowercase");
    }
    
    return 0;
}