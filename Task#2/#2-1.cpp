#include <stdio.h>

int main()
{
    short a, b, c, result;
    printf("Put three integers:");
    scanf("%hd,%hd,%hd", &a, &b, &c);

    result = a + b + c;
    printf("The result is %hd", result);
}