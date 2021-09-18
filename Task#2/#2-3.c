#include <stdio.h>
#include <math.h>

int main()
{
    float pi = 3.14159265;

    printf("%.8f\n%.f\n\t\t\t\t%.4f\n\t\t\t\t%.2f\n\t\t\t\t%.f", floor(pi * 100000000) / 100000000, pi, floor(pi * 10000) / 10000, pi, pi);

    return 0;
}