#include <stdio.h>

int main()
{
    float a, b, c, d, e;
    printf("Enter the marks in all the subjects: ");
    scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);
    if(((a+b+c+d+e)/5.0)>=33){
        printf("You are Passed");
    }
    else printf("You are failed");
    return 0;
}