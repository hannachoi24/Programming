#include <stdio.h>

/* 두 개의 정수를 입력 받은 후 사칙연산 (덧셈, 뺄셈, 곱셈, 나눗셈) 을 수행한 후, 결과값을 return 하는 4개 함수를 작성.
 (아래 main 함수가 올바른 값을 출력하도록 적절하게 함수를 작성) */

int iadd(int a, int b)
{
    return a + b;
}

int isub(int a, int b)
{
    return a - b;
}

int imul(int a, int b)
{
    return a * b;
}

int idiv(int a, int b)
{
    return a / b;
}

int main()
{
    int a = 20, b = 10;

    printf("ADD: %d\n", iadd(a, b)); /* a+b */

    printf("SUB: %d\n", isub(a, b)); /* a-b */

    printf("MUL: %d\n", imul(a, b)); /* a*b */

    printf("DIV: %d\n", idiv(a, b)); /* a/b */

    return 0;
}
