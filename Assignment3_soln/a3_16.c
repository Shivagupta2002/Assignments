#include <stdio.h>

int main()
{
    char c;
    printf("Enter the character: ");
    scanf("%c", &c);
    if(c>=65 && c<=90){
        printf("Uppercase");
    }
    else if (c>=97 && c<=122)
    {
        printf("Lowercase");
    }
    else if (c>=48 && c<=57)
    {
        printf("digit");
    }
    else printf("Special Character");
    
    return 0;
}