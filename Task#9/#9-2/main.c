#include <stdio.h>
#include "calc.h"

// 아래 계산기가 구현된 main.c 파일이 올바르게 작동하도록 calc.c 와 calc.h 파일을 구현

int main(void)
{
    int a = 2, b = 3;
    printf("A + B : %d\n", add(a, b));
    printf("A * B : %d\n", mul(a, b));
    printf("A^2 : %d\n", square(a));
}